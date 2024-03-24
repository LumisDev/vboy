#include <vboy/gl_renderer.hpp>
#include <stdexcept>
void GLRenderer::init(GLADloadproc procAddress){
    if (!gladLoadGLLoader(procAddress)){
        throw std::runtime_error("Failed to initialize GLAD");
        return;
    }
}

void GLRenderer::clear(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
}