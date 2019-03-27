#include "robject.h"

Robject::Robject()
{
	this->s = nullptr;
}

void Robject::add(Sprite* f) 
{
	this->s = f;
	
}

