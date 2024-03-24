#pragma once
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <vboy/gl_renderer.hpp>
class Window {
    public:
      Window(const std::string& title, int width, int height);
      ~Window();
      void update();
      GLRenderer renderer;
    private:
        GLFWwindow* m_window;
        const char* m_title;
        int m_width, m_height;
};
