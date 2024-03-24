#pragma once

#include <glad/glad.h> // Include glad.h for OpenGL functions

class GLRenderer {
public:
    void init(GLADloadproc procAddress);
    void clear();
};
