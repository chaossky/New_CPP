#include <iostream>

//GLEW
#define GLEW_STATIC
#include <GL/glew.h>

//GLFW
#include <GLFW/glfw3.h>

//Window dimensions
const GLint WIDTH = 800, HEIGHT = 600;


//The Main Function, from here we start the application and run the game loop
int main() 
{
	//Init GLFW
	glfwInit();

	//Set all the required options for GLFW
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);


	//Create a GLFW Window object that we can use for GLFW's functions
	GLFWwindow *window = glfwCreateWindow(WIDTH, HEIGHT, "Learn OpenGL", nullptr,nullptr);

	int screenWidth, screenHeight;
	glfwGetFramebufferSize(window, &screenWidth, &screenHeight);
	
	if (nullptr == window) 
	{
		std::cout << "Fail to create GLFW Window" << std::endl;
		glfwTerminate();

		return EXIT_FAILURE;
	}

	glfwMakeContextCurrent(window);

	//set this to true so GLEW knows to use a modern approach to retrieving function pointers and extensions
	glewExperimental = GL_TRUE;

	//Initialize GLEW to set up the OpenGL function pointers
	if (GLEW_OK != glewInit())
	{
		std::cout << "Fail to initialize GLEW" << std::endl;

		return EXIT_FAILURE;
	}

	glViewport(0,0,screenWidth,screenHeight);

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();

		glClearColor(0.2f,0.3f,0.3f,1.0f);

		glClear(GL_COLOR_BUFFER_BIT);

		//draw opengl stuff

		glfwSwapBuffers(window);
	}
		

	glfwTerminate();

	return EXIT_SUCCESS;


}



