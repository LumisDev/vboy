#pragma once
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
class Window {
    public:
      Window(const std::string& title, int width, int height);
      ~Window();
      void update();
    private:
        GLFWwindow* m_window;
        const char* m_title;
        int m_width, m_height;
};
