#pragma once
#include <string>
#include <glad/glad.h>
#include <GLFW/glfw3.h>
namespace vboy{
  class Window {
    public:
      Window(const std::string& title, int width, int height);
      ~Window();
      void update();
    private:
        GLFWwindow* m_window;
        std::string m_title;
        int m_width, m_height;
};
}
