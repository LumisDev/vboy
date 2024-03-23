#include <vboy/window.hpp>
#include <stdexcept>
#include <vboy/gl_renderer.hpp>
Window::Window(const std::string& title, int width, int height)
    : m_title(title.c_str()), m_width(width), m_height(height){
        if (!glfwInit()){
            throw std::runtime_error("Failed to initialize GLFW");
        }
        m_window = glfwCreateWindow(m_width, m_height, m_title, nullptr, nullptr);
        if (!m_window){
            glfwTerminate();
            throw std::runtime_error("Failed to create GLFW window");
        }
        
    }
    Window::~Window(){
        glfwDestroyWindow(m_window);
        glfwTerminate();
    }
void Window::update(){
    GLRenderer renderer((GLADloadproc)glfwGetProcAddress);
    while(!glfwWindowShouldClose(m_window)){
        glfwPollEvents();
        renderer.clear();
        glfwSwapBuffers(m_window);
    }
}