#ifndef CONTROLS_HPP
#define CONTROLS_HPP

// Include GLFW
#include <GLFW/glfw3.h>
extern GLFWwindow* window; // The "extern" keyword here is to access the variable "window" declared in tutorialXXX.cpp. This is a hack to keep the tutorials simple. Please avoid this.

// Include GLM
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>

using namespace glm;

void computeMatricesFromInputs();
mat4 getViewMatrix();
mat4 getProjectionMatrix();

#endif