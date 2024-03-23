#include <vboy/gl_renderer.hpp>
#include <stdexcept>
GLRenderer::GLRenderer(GLADloadproc procAddress){
    if (!gladLoadGLLoader(procAddress)) {
        throw std::runtime_error("GLAD couldn't load OpenGL!");
        return;
    }
}

void GLRenderer::clear(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}