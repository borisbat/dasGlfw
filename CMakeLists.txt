IF((NOT DAS_GLFW_INCLUDED) AND ((NOT ${DAS_GLFW_DISABLED}) OR (NOT DEFINED DAS_GLFW_DISABLED)))
    SET(DAS_GLFW_INCLUDED TRUE)
    MESSAGE(STATUS "dasGlfw module included.")
	SET(DAS_GLFW_DIR ${CMAKE_SOURCE_DIR}/modules/dasGlfw)
	SET(GLFW_INCLUDE_DIR ${DAS_GLFW_DIR}/glfw/include)

	SET(GLFW_STATIC_LIB_PATH ${DAS_GLFW_DIR}/glfw)
	SET(GLFW_DYNAMIC_LIB_PATH ${DAS_GLFW_DIR}/glfw_dyn)

	# We should set GLFW version here in DLL for MAC and Linux.
	IF(APPLE)
		SET(DAS_GLFW_STATIC_PATH ${GLFW_STATIC_LIB_PATH}/lib/libglfw3.a)
		SET(DAS_GLFW_DYN_PATH
			# ${GLFW_DYNAMIC_LIB_PATH}/lib/libglfw.3.dylib
			${GLFW_DYNAMIC_LIB_PATH}/lib/libglfw.3.3.dylib
		)
	ELSEIF(UNIX)
		SET(DAS_GLFW_STATIC_PATH ${GLFW_STATIC_LIB_PATH}/lib/libglfw3.a)
		SET(DAS_GLFW_DYN_PATH
			# ${GLFW_DYNAMIC_LIB_PATH}/lib/libglfw.so.3
			${GLFW_DYNAMIC_LIB_PATH}/lib/libglfw.so.3.3
		)
	ELSE()
		SET(DAS_GLFW_STATIC_PATH ${GLFW_STATIC_LIB_PATH}/lib/glfw3.lib)
		SET(DAS_GLFW_DYN_PATH ${GLFW_DYNAMIC_LIB_PATH}/lib/glfw3dll.lib)
	ENDIF()

	MACRO(BUILD_GLFW glfw_libraries glfw3_target build_shared_libs install_prefix)
		LIST(APPEND CMAKE_MODULE_PATH ${DAS_GLFW_DIR})
		include(ExternalProject)
		IF(APPLE)
			ExternalProject_Add(
				${glfw3_target}
				SOURCE_DIR ${DAS_GLFW_DIR}/libglfw
				CMAKE_ARGS
					-DOSX_ARCHITECTURES=${CMAKE_OSX_ARCHITECTURES}
					-DCMAKE_INSTALL_PREFIX=${install_prefix}
					-DCMAKE_BUILD_TYPE=Release -DGLFW_BUILD_EXAMPLES=OFF
					-DGLFW_BUILD_TESTS=OFF
					-DBUILD_SHARED_LIBS=${build_shared_libs}
				BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}/libglfw/build
				BUILD_BYPRODUCTS ${glfw_libraries}
			)
		ELSE()
			ExternalProject_Add(
				${glfw3_target}
				SOURCE_DIR ${DAS_GLFW_DIR}/libglfw
				CMAKE_ARGS 
					-DCMAKE_INSTALL_PREFIX=${install_prefix}
					-DCMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
					-DGLFW_BUILD_EXAMPLES=OFF -DGLFW_BUILD_TESTS=OFF
					-DCMAKE_CXX_COMPILER=${CMAKE_CXX_COMPILER}
					-DCMAKE_C_COMPILER=${CMAKE_C_COMPILER}
					-DCMAKE_LINKER=${CMAKE_LINKER}
					-DBUILD_SHARED_LIBS=${build_shared_libs}
				BINARY_DIR ${CMAKE_CURRENT_BINARY_DIR}/libglfw/build_dyn
				BUILD_BYPRODUCTS ${glfw_libraries}
			)
		ENDIF()
	ENDMACRO()

	BUILD_GLFW(${DAS_GLFW_STATIC_PATH} GLFW3 OFF ${DAS_GLFW_DIR}/glfw)
	BUILD_GLFW(${DAS_GLFW_DYN_PATH} GLFW3_DYN ON ${DAS_GLFW_DIR}/glfw_dyn)
	# Something wrong with parallel cmake launching. We should launch
	# consequently.
	ADD_DEPENDENCIES(GLFW3_DYN GLFW3)

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
	ADD_MODULE_CPP(dasGLFW)
	ADD_MODULE_DAS(glfw dasglfw glfw_boost)
	ADD_MODULE_DAS(glfw dasglfw glfw_live)
	ADD_MODULE_LIB(libDasModuleGlfw dasModuleGlfw ${DAS_GLFW_BIND_MODULE_SRC})
	MACRO(SETUP_GLFW glfw_mod_lib glfw_target)
		ADD_DEPENDENCIES(${glfw_mod_lib} ${glfw_target})
		IF(UNIX AND NOT APPLE)
			find_package(OpenGL REQUIRED)
			target_link_libraries(${glfw_mod_lib} PRIVATE ${OPENGL_gl_LIBRARY} GL X11 Xrandr pthread Xi dl)
		ENDIF()
		TARGET_INCLUDE_DIRECTORIES(${glfw_mod_lib} PUBLIC ${GLFW_INCLUDE_DIR})
		SETUP_CPP11(${glfw_mod_lib})
	ENDMACRO()
	SETUP_GLFW(libDasModuleGlfw GLFW3)
	TARGET_LINK_LIBRARIES(libDasModuleGlfw PUBLIC ${DAS_GLFW_STATIC_PATH})
	# We do not need to link dynamic library. 
	SETUP_GLFW(dasModuleGlfw GLFW3_DYN)
	TARGET_LINK_LIBRARIES(dasModuleGlfw PUBLIC ${DAS_GLFW_DYN_PATH})
	IF(APPLE)
		find_library(COCOA_LIBRARY Cocoa)
		find_library(IOKIT_LIBRARY IOKit)
		find_library(METAL_LIBRARY Metal)
		find_library(QUARTZCORE_LIBRARY QuartzCore)
		SET(APPLE_GLFW_LIBRARIES
			${COCOA_LIBRARY}
			${IOKIT_LIBRARY}
			${METAL_LIBRARY}
			${QUARTZCORE_LIBRARY})
		TARGET_LINK_LIBRARIES(dasModuleGlfw PUBLIC ${APPLE_GLFW_LIBRARIES})
		TARGET_LINK_LIBRARIES(libDasModuleGlfw PUBLIC ${APPLE_GLFW_LIBRARIES})
	ENDIF()

	# ADD_CUSTOM_COMMAND(TARGET glfw_mod POST_BUILD
	# 	COMMAND ${CMAKE_COMMAND} -E copy_if_different
	# 		${DAS_GLFW_DYN_PATH}
	# 		"$<TARGET_FILE_DIR:libDasModuleGlfw>"
	# )
	IF(WIN32)
		# On Win we have .dll and .lib in runtime only .dll is needed. 
		install(FILES ${GLFW_DYNAMIC_LIB_PATH}/bin/glfw3.dll DESTINATION ${DAS_INSTALL_BINDIR})
	ELSE()
		install(FILES ${DAS_GLFW_DYN_PATH} DESTINATION ${DAS_INSTALL_LIBDIR})
	ENDIF()

    file(GLOB DASGLFW_SOURCES
		${DAS_GLFW_DIR}/dasglfw/*.das
    )
    install(FILES ${DASGLFW_SOURCES}
        DESTINATION ${DAS_INSTALL_MODULESDIR}/dasGlfw/dasglfw
    )
    file(GLOB DAS_GLFW_EXAMPLES
		${DAS_GLFW_DIR}/examples/*.*
    )
    install(FILES ${DAS_GLFW_EXAMPLES}
        DESTINATION ${DAS_INSTALL_EXAMPLESDIR}/glfw
    )

	install(FILES ${PROJECT_SOURCE_DIR}/modules/dasGlfw/libglfw/LICENSE.md DESTINATION ${DAS_INSTALL_DOCDIR} RENAME GLFW.LICENSE)

ENDIF()
