#pragma once

#include <glad/glad.h> // Include glad.h for OpenGL functions

class GLRenderer {
public:
    GLRenderer(GLADloadproc procAddress);
    void clear();
};
