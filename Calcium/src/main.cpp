#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#define GLM_FORCE_RADIANS
#define GLM_FORCE_DEPTH_ZERO_TO_ONE
#include <glm/vec4.hpp>
#include <glm/mat4x4.hpp>

#include <iostream>
#include <stdexcept>
#include <cstdlib>

#include "graphics/Triangle.h"


int main() {
    Triangle Triangle;

    try {
        Triangle.run();
    }
    catch (const std::exception& e) {
    std::cout << "Oopsies" << std::endl;
    std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;

    }

    return EXIT_SUCCESS;
}