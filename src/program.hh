#pragma once

#include <fstream>
#include <GL/glew.h>
#include <GL/gl.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <string>
#include <vector>

class Program {
public:
    GLuint programId;
    std::vector<GLuint> shaderId;
    void loadShaders(const std::string&, const std::string&);
    void loadShaders(const std::string&, const std::string&, const std::string&, const std::string&);
    void linkProgram(void);
};