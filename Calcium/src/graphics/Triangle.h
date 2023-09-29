#pragma once

#include <GLFW/glfw3.h>
#include <vulkan/vulkan.h>
#include <stdexcept>
#include <vector>
#include <iostream>

class Triangle {
public:
	Triangle();

	void run();
	
private:
	GLFWwindow* window;
	VkInstance instance;

private:
	void createInstance();
	void initVulkan();
	void mainLoop();
	void cleanup();
};

