options indenting = 4

module glfw_boost shared

require glfw public
require daslib/safe_addr
require math
require rtti

def glfwInitOpenGL(major:int=3;minor:int=3)
    this_context().category |= bitfield(1u << 3u)   // setup OpenGL flag
    glfwWindowHint(int(GLFW_CONTEXT_VERSION_MAJOR), major)
    glfwWindowHint(int(GLFW_CONTEXT_VERSION_MINOR), minor)
    glfwWindowHint(int(GLFW_OPENGL_PROFILE), int(GLFW_OPENGL_COMPAT_PROFILE))
    glfwWindowHint(int(GLFW_OPENGL_FORWARD_COMPAT), int(GL_TRUE))

def glfwGetFramebufferSize ( window:GLFWwindow?; var display_w,display_h:int& )
    glfw::glfwGetFramebufferSize(window, safe_addr(display_w), safe_addr(display_h))

def glBeginEnd(prim:uint;blk:block)
    glBegin(prim)
    invoke(blk)
    glEnd()

def gluPerspective(fovy,aspectRatio,znear,zfar:double)
    var ymax = znear * tan(fovy/2.0lf)
    var ymin = -ymax
    var xmin = -ymax * aspectRatio
    var xmax = ymax * aspectRatio
    glFrustum(-xmax, xmax, -ymax, ymax, znear, zfar)

def glTexParameteri ( target : uint; pname : uint; param : uint )
    glfw::glTexParameteri(target,pname,int(param))

def gl_array_ptr ( foo : array<auto> ) : void?
    unsafe
        return reinterpret<void?> addr(foo[0])

def gl_array_ptr ( foo : auto[] ) : void?
    unsafe
        return reinterpret<void?> addr(foo[0])

def gl_array_ptr ( foo : auto[][] ) : void?
    unsafe
        return reinterpret<void?> addr(foo[0][0])