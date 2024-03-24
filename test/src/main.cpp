#include <iostream>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vboy/window.hpp>

int main() {
    if (!glfwInit()) {
        std::cerr << "Failed to initialize GLFW" << std::endl;
        return -1;
    }

    vboy::Window window("Hello, VBoy!", 640, 480);

    glClearColor(0.3f, 0.4f, 0.0f, 1.0f);
    window.update();

    return 0;
}
