require glfw/glfw_live

[export]
def main
    glfw_live(
        "example_app.das",
        "{get_das_root()}/modules/dasGlfw/framework",
        "GLFW demo in live mode"
    )

options debugger
require daslib/debug
