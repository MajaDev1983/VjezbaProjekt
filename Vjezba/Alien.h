#ifndef ALIEN_H
#define ALIEN_H
#include <iostream>
#include <string>
#include "Air.h"
#include "Earth.h"
#include "Water.h"

class Alien
{
public:

	static Alien* typeAlien(std::string type);
	Alien();
	~Alien();
};

#endif // !ALIEN_H
