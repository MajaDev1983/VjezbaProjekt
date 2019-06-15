#include "Singleton.h"

Singleton* Singleton::instance = 0;

Singleton::Singleton()
{
}


Singleton * Singleton::getInstance()
{
	if (instance == nullptr)
	{
		instance = new Singleton();
		return instance;
	}
	else
	{
		return instance;
	}

}

void Singleton::print()
{
	std::cout << "Ja sam singleton objekt! Woohoo!" << std::endl;
}

Singleton::~Singleton()
{
}
