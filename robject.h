
#ifndef ROBJECT_H
#define ROBJECT_H
#include "sprite.h"
//#include "renderer.h"
#include <fstream>
#include <iostream>
#include <glfw3.h>
#include <glm/glm.hpp>
#include <sensation_simulation/Input.h>


class Robject {
public:

	Robject();
	 void add(Sprite* f);
	
	 //void get(Sprite* f);
	 //void addSprite(const std::string& filename, int pos_x, int pos_y);
	~Robject();
	Sprite* s;
	Input* input;
	glm::vec3 position;
	float mass = 1;
	glm::vec3 location;
	glm::vec3 velocity;
	glm::vec3 acceleration;
	void applyForce(glm::vec3);
private:
	//Input* _input;
};
#endif