IF(NOT DAS_GLFW_INCLUDED)
    SET(DAS_GLFW_INCLUDED TRUE)
    MESSAGE(STATUS "dasGlfw module included.")

	SET(DAS_GLFW_DIR ${CMAKE_SOURCE_DIR}/modules/dasGlfw)

    LIST(APPEND CMAKE_MODULE_PATH ${DAS_GLFW_DIR})

    FIND_PACKAGE(glfw3)

	IF(NOT glfw3_FOUND)
		MESSAGE(STATUS "GLFW3 not found. Not building dasGlfw.")
	ELSE()
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
		ADD_MODULE_NATIVE(glfw_boost)
		ADD_LIBRARY(libDasModuleGlfw ${DAS_GLFW_MODULE_SRC})
		TARGET_LINK_LIBRARIES(libDasModuleGlfw ${glfw_LIBRARIES})
		ADD_DEPENDENCIES(libDasModuleGlfw libDaScript)
IF(UNIX)
		target_link_libraries(libDasModuleGlfw ${OPENGL_gl_LIBRARY} GL glfw)
ENDIF()
		TARGET_INCLUDE_DIRECTORIES(libDasModuleGlfw PUBLIC ${glfw_INCLUDE_DIR})
		SETUP_CPP11(libDasModuleGlfw)

		# GENERATED GLFW

        FIND_FILE(GL_H "GL/gl.h")
        SET(DAS_GLFW_CONSTS
            "${glfw_INCLUDE_DIR}/GLFW/glfw3.h"
            "${GL_H}"
        )
		DAS_CPP_BIND_AST(
			GLFW_GENERATE
			generate_glfw.das
			${DAS_GLFW_DIR}/src/glfw_headers.h
			${DAS_GLFW_DIR}/src/module_glfw
			${DAS_GLFW_DIR}/src
			"${glfw_INCLUDE_DIR}"
			"${DAS_GLFW_CONSTS}"
		)

		# libDasModuleOpenGL
		SET(DAS_OPENGL_MODULE_SRC
			${DAS_GLFW_DIR}/src/need_opengl.h
			#${DAS_GLFW_DIR}/src/aot_glfw.h
			${DAS_GLFW_DIR}/src/module_opengl.ann.cpp_inc
			${DAS_GLFW_DIR}/src/module_opengl.ann.inc
			${DAS_GLFW_DIR}/src/module_opengl.const_inc
			${DAS_GLFW_DIR}/src/module_opengl.cpp
			${DAS_GLFW_DIR}/src/module_opengl_ann.cpp
			${DAS_GLFW_DIR}/src/module_opengl_const.cpp
			${DAS_GLFW_DIR}/src/module_opengl_fun.cpp
			${DAS_GLFW_DIR}/src/module_opengl.enum.cpp_inc
			${DAS_GLFW_DIR}/src/module_opengl.enum.inc
			${DAS_GLFW_DIR}/src/module_opengl.inc
			${DAS_GLFW_DIR}/src/module_opengl.method.inc
		)
		ADD_MODULE_LIB(libDasModuleOpenGL)
		ADD_MODULE_CPP(opengl)
		#ADD_MODULE_NATIVE(glfw_boost)
		ADD_LIBRARY(libDasModuleOpenGL ${DAS_OPENGL_MODULE_SRC})
		#TARGET_LINK_LIBRARIES(libDasModuleGlfw ${glfw_LIBRARIES})
		ADD_DEPENDENCIES(libDasModuleOpenGL libDaScript)
IF(UNIX)
		target_link_libraries(libDasModuleOpenGL ${OPENGL_gl_LIBRARY} GL)
ENDIF()
		TARGET_INCLUDE_DIRECTORIES(libDasModuleOpenGL PUBLIC ${glfw_INCLUDE_DIR})
		SETUP_CPP11(libDasModuleOpenGL)

		# GENERATE OPENGL

		DAS_CPP_BIND_AST(
			OPENGL_GENERATE
			generate_opengl.das
			${DAS_GLFW_DIR}/src/opengl_headers.h
			${DAS_GLFW_DIR}/src/module_opengl
			${DAS_GLFW_DIR}/src
			"${glfw_INCLUDE_DIR}"
			"./OpenGL/glcorearb.h"
		)
	ENDIF()
ENDIF()
