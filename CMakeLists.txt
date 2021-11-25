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
			CMAKE_ARGS -DCMAKE_INSTALL_PREFIX=${DAS_GLFW_DIR}/glfw -DCMAKE_BUILD_TYPE=Release -DGLFW_BUILD_EXAMPLES=OFF -DGLFW_BUILD_TESTS=OFF
			BINARY_DIR ${DAS_GLFW_DIR}/libglfw/build
		)
	ENDIF()

	# libDasModuleGlfw
	SET(DAS_GLFW_MODULE_SRC
		${DAS_GLFW_DIR}/src/need_glfw.h
		${DAS_GLFW_DIR}/src/aot_glfw.h
		${DAS_GLFW_DIR}/src/module_glfw.ann.cpp_inc
		${DAS_GLFW_DIR}/src/module_glfw.ann.inc
		${DAS_GLFW_DIR}/src/module_glfw.const_inc
		${DAS_GLFW_DIR}/src/module_glfw.cpp
		${DAS_GLFW_DIR}/src/module_glfw_ann.cpp
		${DAS_GLFW_DIR}/src/module_glfw_const.cpp
		${DAS_GLFW_DIR}/src/module_glfw_fun.cpp
		${DAS_GLFW_DIR}/src/module_glfw.enum.cpp_inc
		${DAS_GLFW_DIR}/src/module_glfw.enum.inc
		${DAS_GLFW_DIR}/src/module_glfw.inc
		${DAS_GLFW_DIR}/src/module_glfw.method.inc
	)
	ADD_MODULE_LIB(libDasModuleGlfw)
	ADD_MODULE_CPP(glfw)
	ADD_MODULE_DAS(glfw dasglfw glfw_boost)
	ADD_MODULE_DAS(glfw dasglfw glfw_live)
	ADD_LIBRARY(libDasModuleGlfw ${DAS_GLFW_MODULE_SRC})
	TARGET_LINK_LIBRARIES(libDasModuleGlfw ${GLFW_LIBRARIES})
	ADD_DEPENDENCIES(libDasModuleGlfw libDaScript GLFW3)
#IF(UNIX)
	#target_link_libraries(libDasModuleGlfw ${OPENGL_gl_LIBRARY} GL glfw)
#ENDIF()
	TARGET_INCLUDE_DIRECTORIES(libDasModuleGlfw PUBLIC ${GLFW_INCLUDE_DIR})
	SETUP_CPP11(libDasModuleGlfw)

	# GENERATED GLFW

	FIND_FILE(GL_H "GL/gl.h")
	MESSAGE("gl.h at ${GL_H}")
	SET(DAS_GLFW_CONSTS
		"${GLFW_INCLUDE_DIR}/GLFW/glfw3.h"
		"${GL_H}"
	)
	DAS_CPP_BIND_AST(
		GLFW_GENERATE
		generate_glfw.das
		${DAS_GLFW_DIR}/src/glfw_headers.h
		${DAS_GLFW_DIR}/src/module_glfw
		${DAS_GLFW_DIR}/src
		"${GLFW_INCLUDE_DIR}"
		"${DAS_GLFW_CONSTS}"
	)
ENDIF()
