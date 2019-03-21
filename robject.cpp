#include "robject.h"

Robject::Robject() 
{
	this->s = nullptr;
	//if (this->getKey(KeyCode::Down)) 
	//{
		//std::cout << "works";
	//}
}
void Robject::add(Sprite* f) 
{
	this->s = f;
	
}

/*void Robject::_handleKey(unsigned int key)
{
	if (glfwGetKey(_window, key) == GLFW_PRESS) {
		if (_keys[key] == false) { // if first time pressed down
			_keys[key] = true;
			_keysDown[key] = true;
			//std::cout << "DOWN: " << key << std::endl;
		}
		else {
			// not the first time this is pressed
			// keys[key] is still true;
			_keysDown[key] = false;
		}
	}
	if (glfwGetKey(_window, key) == GLFW_RELEASE) {
		if (_keys[key] == true) { // still pressed
			_keys[key] = false;
			_keysUp[key] = true;
			//std::cout << "UP: " << key << std::endl;
		}
		else {
			_keysUp[key] = false;
		}
	}
}

*/

//void robject::get(Sprite f) 
//{
	//Sprite* f = s;
	
//}

/*void robject::addSprite(const std::string& filename, int pos_x, int pos_y)
{
	this->addSprite(filename, pos_x, pos_y);
}
*/
Robject::~Robject() 
{

}