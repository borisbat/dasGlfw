options indenting = 4

module glfw_boost shared

require glfw public
require daslib/safe_addr
require math

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