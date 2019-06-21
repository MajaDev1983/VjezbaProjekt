#include "SFML/Graphics.hpp"
#include <iostream>
#include "Singleton.h"
#include "Alien.h"

int main()
{
	Singleton* s = Singleton::getInstance();
	Singleton* r = Singleton::getInstance();

	std::cout << s << std::endl;
	std::cout << r << std::endl;
	//kako da deletam objekte tako da nemam memory leak????

	Singleton::getInstance()->print();

	Alien* earth = Alien::typeAlien("Earth");
	std::cout << earth->typeAlien << std::endl;
	earth->printFunction();

	Alien* air = Alien::typeAlien("Air");
	std::cout << air->typeAlien << std::endl;
	air->printFunction();

	Alien* water = Alien::typeAlien("Water");
	std::cout << water->typeAlien << std::endl;
	water->printFunction();


	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.display();
	}

	delete air;
	delete earth;
	delete water;

	std::cin.get();

	return 0;
}