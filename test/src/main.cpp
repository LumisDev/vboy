#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vboy/window.hpp>
#include <vboy/gl_renderer.hpp>

int main(){
    Window window("Hello, VBoy!", 640, 480);
    GLRenderer renderer;
    window.renderer = renderer;
    window.renderer.init((GLADloadproc)glfwGetProcAddress);
    glClearColor(1.0, 1.0, 0.0, 1.0);
    window.update();
    return 0;
}