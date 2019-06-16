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

	Singleton::getInstance()->print();

	Alien* earth = Alien::typeAlien("Earth");
	std::cout << earth->typeAlien << std::endl;

	Alien* air = Alien::typeAlien("Air");
	std::cout << air->typeAlien << std::endl;

	Alien* water = Alien::typeAlien("Water");
	std::cout << water->typeAlien << std::endl;


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

	std::cin.get();

	return 0;
}