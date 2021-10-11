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
		ADD_MODULE_DAS(glfw glfw glfw_boost)
		ADD_MODULE_DAS(glfw glfw glfw_live)
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

		IF(WIN32)
			# libDasModuleOpenGL
			SET(DAS_OPENGL_MODULE_SRC
				${DAS_GLFW_DIR}/src/need_opengl.h
				${DAS_GLFW_DIR}/src/aot_glfw.h
				${DAS_GLFW_DIR}/src/module_opengl.ann.cpp_inc
				${DAS_GLFW_DIR}/src/module_opengl.ann.inc
				${DAS_GLFW_DIR}/src/module_opengl.const_inc
				${DAS_GLFW_DIR}/src/module_opengl.cpp
				${DAS_GLFW_DIR}/src/module_opengl_win.cpp
				${DAS_GLFW_DIR}/src/module_opengl_ann.cpp
				${DAS_GLFW_DIR}/src/module_opengl_const.cpp
				${DAS_GLFW_DIR}/src/module_opengl_fun.cpp
				${DAS_GLFW_DIR}/src/module_opengl.enum.cpp_inc
				${DAS_GLFW_DIR}/src/module_opengl.enum.inc
				${DAS_GLFW_DIR}/src/module_opengl.inc
				${DAS_GLFW_DIR}/src/module_opengl.method.inc
				${DAS_GLFW_DIR}/src/opengl_win32.inc
				${DAS_GLFW_DIR}/src/aot_opengl.inc
			)
			ADD_MODULE_LIB(libDasModuleOpenGL)
			ADD_MODULE_CPP(opengl)
			ADD_MODULE_DAS(opengl opengl opengl_boost_internal)
			ADD_MODULE_DAS(opengl opengl opengl_boost)
			ADD_MODULE_DAS(opengl opengl opengl_state)
			ADD_MODULE_DAS(opengl opengl opengl_ttf)
			ADD_MODULE_DAS(opengl opengl opengl_gen)
			ADD_MODULE_DAS(glsl glsl glsl)
			ADD_MODULE_DAS(glsl glsl glsl_internal)
			ADD_LIBRARY(libDasModuleOpenGL ${DAS_OPENGL_MODULE_SRC})
			#TARGET_LINK_LIBRARIES(libDasModuleGlfw ${glfw_LIBRARIES})
			ADD_DEPENDENCIES(libDasModuleOpenGL libDaScript)
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

			# demo AOT
			add_custom_target(dasOpenGL_AOT)
			SET(OPENGL_AOT_GENERATED_SRC)
			DAS_AOT("${DAS_GLFW_DIR}/example/opengl_app.das" OPENGL_AOT_GENERATED_SRC dasOpenGL_AOT dasAot)
			DAS_AOT("${DAS_GLFW_DIR}/glfw/glfw_boost.das" OPENGL_AOT_GENERATED_SRC dasOpenGL_AOT dasAot)
			DAS_AOT("${DAS_GLFW_DIR}/glfw/glfw_live.das" OPENGL_AOT_GENERATED_SRC dasOpenGL_AOT dasAot)
			DAS_AOT("${DAS_GLFW_DIR}/opengl/opengl_boost.das" OPENGL_AOT_GENERATED_SRC dasOpenGL_AOT dasAot)
			DAS_AOT("${DAS_GLFW_DIR}/opengl/opengl_state.das" OPENGL_AOT_GENERATED_SRC dasOpenGL_AOT dasAot)
			SOURCE_GROUP_FILES("aot stub" OPENGL_AOT_GENERATED_SRC)

			# now, the demo
			SET(OPENGL_DEMO_SRC
				${DAS_GLFW_DIR}/example/opengl_demo_aot.cpp
				${DAS_MODULES_NEED_INC}
			)
			SOURCE_GROUP_FILES("main" _OPENGL_DEMO_SRC)
			add_executable(dasOpenGL_DEMO ${OPENGL_DEMO_SRC} ${OPENGL_AOT_GENERATED_SRC} ${AOT_GENERATED_SRC})
			TARGET_LINK_LIBRARIES(dasOpenGL_DEMO libDaScript libDasModuleUriparser libUriParser Threads::Threads)
			ADD_DEPENDENCIES(dasOpenGL_DEMO libDaScript libDasModuleUriparser libUriParser)
			ADD_DEPENDENCIES(dasOpenGL_DEMO dasOpenGL_AOT dasAotStub)
			SETUP_CPP11(dasOpenGL_DEMO)
			SETUP_LTO(dasOpenGL_DEMO)
			ADD_EXAMPLE(dasOpenGL_DEMO)

		ENDIF()
	ENDIF()
ENDIF()
