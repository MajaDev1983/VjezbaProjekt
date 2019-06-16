#ifndef ALIEN_H
#define ALIEN_H
#include <iostream>
#include <string>

class Alien
{
public:

	static Alien* typeAlien(std::string type);
	Alien();
	~Alien();
};

#endif // !ALIEN_H
