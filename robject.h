
#ifndef ROBJECT_H
#define ROBJECT_H
#include "sprite.h"
//#include "renderer.h"
#include <fstream>
#include <iostream>
#include <glfw3.h>
#include <glm/glm.hpp>
enum KeyCode
{
	Right = 262,
	Left = 263,
	Down = 264,
	Up = 265,
};
class Robject {
public:

	Robject();
	 void add(Sprite* f);
	 //bool getKey(char key) 
	// {
	//	 return getKey((KeyCode)key); 
	// }
	 //void get(Sprite* f);
	 //void addSprite(const std::string& filename, int pos_x, int pos_y);
	~Robject();
	Sprite* s;

	glm::vec3 position;
/*private:
	GLFWwindow* _window;
	void _handleKey(unsigned int key);
	bool _keys[GLFW_KEY_LAST]; ///< @brief internal array of pressed keys
	bool _keysUp[GLFW_KEY_LAST]; ///< @brief internal array of released keys
	bool _keysDown[GLFW_KEY_LAST]; ///< @brief internal array of keys pressed the first time

	bool _mouse[GLFW_MOUSE_BUTTON_LAST]; ///< @brief internal array of pressed mouse buttons
	bool _mouseUp[GLFW_MOUSE_BUTTON_LAST]; ///< @brief internal array of released mouse buttons
	bool _mouseDown[GLFW_MOUSE_BUTTON_LAST]; ///< @brief internal array of mouse buttons pressed the first time

	int _windowWidth; ///< @brief Width of the window
	int _windowHeight;
	*/
};
#endif