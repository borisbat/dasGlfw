IF((NOT DAS_GLFW_INCLUDED) AND ((NOT ${DAS_GLFW_DISABLED}) OR (NOT DEFINED DAS_GLFW_DISABLED)))
    SET(DAS_GLFW_INCLUDED TRUE)
    MESSAGE(STATUS "dasGlfw module included.")
	SET(DAS_GLFW_DIR ${CMAKE_SOURCE_DIR}/modules/dasGlfw)
	SET(GLFW_INCLUDE_DIR ${DAS_GLFW_DIR}/glfw/include)
	IF(APPLE)
		find_library(COCOA_LIBRARY Cocoa)
		find_library(IOKIT_LIBRARY IOKit)
		find_library(METAL_LIBRARY Metal)
		find_library(QUARTZCORE_LIBRARY QuartzCore)
		SET(GLFW_LIBRARIES
			${DAS_GLFW_DIR}/glfw/lib/libglfw3.a
			${COCOA_LIBRARY}
			${IOKIT_LIBRARY}
			${METAL_LIBRARY}
			${QUARTZCORE_LIBRARY}
		)
	ELSEIF(UNIX)
		SET(GLFW_LIBRARIES ${DAS_GLFW_DIR}/glfw/lib/libglfw3.a)
	ELSE()
		SET(GLFW_LIBRARIES ${DAS_GLFW_DIR}/glfw/lib/glfw3.lib)
	ENDIF()

    LIST(APPEND CMAKE_MODULE_PATH ${DAS_GLFW_DIR})

	include(ExternalProject)

	IF(APPLE)
		ExternalProject_Add(
			GLFW3
			SOURCE_DIR ${DAS_GLFW_DIR}/libglfw
			CMAKE_ARGS -DOSX_ARCHITECTURES=${CMAKE_OSX_ARCHITECTURES} -DCMAKE_INSTALL_PREFIX=${DAS_GLFW_DIR}/glfw -DCMAKE_BUILD_TYPE=Release -DGLFW_BUILD_EXAMPLES=OFF -DGLFW_BUILD_TESTS=OFF
			BINARY_DIR ${DAS_GLFW_DIR}/libglfw/build
		)
	ELSE()
		ExternalProject_Add(
			GLFW3
			SOURCE_DIR ${DAS_GLFW_DIR}/libglfw
			CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${DAS_GLFW_DIR}/glfw -DCMAKE_BUILD_TYPE=Release -DGLFW_BUILD_EXAMPLES=OFF -DGLFW_BUILD_TESTS=OFF -DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER} -DCMAKE_C_COMPILER=${CMAKE_C_COMPILER} -DCMAKE_LINKER=${CMAKE_LINKER}
			BINARY_DIR ${DAS_GLFW_DIR}/libglfw/build
		)
	ENDIF()

	SET(DAS_GLFW_BIND_DIR ${DAS_GLFW_DIR})

	# libDasModuleGlfw
	SET(DAS_GLFW_BIND_MODULE_SRC
		${DAS_GLFW_BIND_DIR}/src/aot_dasGLFW.h
		${DAS_GLFW_BIND_DIR}/src/cb_dasGLFW.h
		${DAS_GLFW_BIND_DIR}/src/need_dasGLFW.h
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.h
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.cpp
	# user include
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.main.cpp
	# generated binding includes
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.alias.add.inc
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.dummy.add.inc
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.enum.add.inc
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.enum.class.inc
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.enum.decl.inc
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.enum.decl.cast.inc
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.struct.add.inc
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.struct.postadd.inc
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.struct.class.inc
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.struct.decl.inc
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.struct.impl.inc
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.struct.cast.inc
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.const.inc
	# generated functions
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.func_1.cpp
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.func_2.cpp
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.func_3.cpp
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.func_4.cpp
		${DAS_GLFW_BIND_DIR}/src/dasGLFW.func_5.cpp
	)
	ADD_MODULE_LIB(libDasModuleGlfw)
	ADD_MODULE_CPP(dasGLFW)
	ADD_MODULE_DAS(glfw dasglfw glfw_boost)
	ADD_MODULE_DAS(glfw dasglfw glfw_live)
	ADD_LIBRARY(libDasModuleGlfw ${DAS_GLFW_BIND_MODULE_SRC})
	TARGET_LINK_LIBRARIES(libDasModuleGlfw ${GLFW_LIBRARIES})
	ADD_DEPENDENCIES(libDasModuleGlfw GLFW3)
IF(UNIX AND NOT APPLE)
	find_package(OpenGL REQUIRED)
	target_link_libraries(libDasModuleGlfw ${OPENGL_gl_LIBRARY} GL X11 Xrandr pthread Xi dl)
ENDIF()
	TARGET_INCLUDE_DIRECTORIES(libDasModuleGlfw PUBLIC ${GLFW_INCLUDE_DIR})
	SETUP_CPP11(libDasModuleGlfw)
ENDIF()
