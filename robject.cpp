#include "robject.h"

Robject::Robject()
{
	this->s = nullptr;
	
}

void Robject::add(Sprite* f) 
{
	this->s = f;
	
}
void Robject::applyForce(glm::vec3 force) 
{
	glm::vec3 f = force/mass;
	acceleration += f;
}


