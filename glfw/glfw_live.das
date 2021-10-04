
options no_unused_block_arguments = false
options no_unused_function_arguments = false
options indenting = 4

module glfw_live shared public

require glfw/glfw_boost
require opengl/opengl_boost
require daslib/defer
require daslib/live

def public glfw_live(appf,appd,title:string)
    if glfwInit()==0
		panic("can't init glfw")
    defer <|
        glfwTerminate()
    glfwInitOpenGL(3,3)
    var window = glfwCreateWindow(1280, 720, title, null, null)
    if window==null
		panic("can't create window")
    defer <|
        glfwDestroyWindow(window)
    glfwMakeContextCurrent(window)
    go_live(appf, appd)
    while glfwWindowShouldClose(window)==0
        glfwPollEvents()
        var display_w, display_h : int
        glfwGetFramebufferSize(window, display_w, display_h)
        if is_live()
            invoke_live("display", display_w, display_h)
        else
            glViewport(0, 0, display_w, display_h)
            glClearColor(1.0, 0.0, 0.0, 1.0)
            glClearDepth(1.0lf)
            glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT)
        glfwMakeContextCurrent(window)
        glfwSwapBuffers(window)
        if watch_files()
            recompile()

def public glfw_app(title:string)
    if glfwInit()==0
		panic("can't init glfw")
    defer <|
        glfwTerminate()
    glfwInitOpenGL(3,3)
    var window = glfwCreateWindow(1280, 720, title, null, null)
    if window==null
		panic("can't create window")
    defer <|
        glfwDestroyWindow(window)
    glfwMakeContextCurrent(window)
    go_main()
    invoke_live("initialize")
    while glfwWindowShouldClose(window)==0
        glfwPollEvents()
        var display_w, display_h : int
        glfwGetFramebufferSize(window, display_w, display_h)
        invoke_live("display", display_w, display_h)
        glfwMakeContextCurrent(window)
        glfwSwapBuffers(window)
    invoke_live("shutdown")
