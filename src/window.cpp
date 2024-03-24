#include <vboy/window.hpp>
#include <stdexcept>

vboy::Window::Window(const std::string& title, int width, int height)
    : m_title(title), m_width(width), m_height(height) {
    if (!glfwInit()) {
        throw std::runtime_error("Failed to initialize GLFW");
    }
    m_window = glfwCreateWindow(m_width, m_height, m_title.c_str(), nullptr, nullptr);
    if (!m_window) {
        glfwTerminate();
        throw std::runtime_error("Failed to create GLFW window");
    }
    glfwMakeContextCurrent(m_window); // Make the window's context current

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        glfwDestroyWindow(m_window);
        glfwTerminate();
        throw std::runtime_error("Failed to initialize GLAD");
    }
}

vboy::Window::~Window() {
    glfwDestroyWindow(m_window);
    glfwTerminate();
}

void vboy::Window::update() {
    while (!glfwWindowShouldClose(m_window)) {
        // Clear the color buffer
        glClear(GL_COLOR_BUFFER_BIT);

        // Render here
        
        // Swap buffers
        glfwSwapBuffers(m_window);

        // Poll for and process events
        glfwPollEvents();
    }
}
