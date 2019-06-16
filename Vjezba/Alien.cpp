#include "Alien.h"
#include "Air.h"
#include "Earth.h"
#include "Water.h"



Alien* Alien::typeAlien(std::string type)
{
	if (type == "Air")
	{
		return new Air();
	}
	else if (type == "Earth")
	{
		return new Earth();
	}
	else if (type == "Water")
	{
		return new Water();
	}
	else
	{
		return 0;
	}
}

Alien::Alien()
{
}


Alien::~Alien()
{
}
