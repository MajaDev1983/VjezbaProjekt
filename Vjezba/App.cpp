#include "SFML/Graphics.hpp"
#include <iostream>
#include "Singleton.h"

int main()
{
	Singleton* s = Singleton::getInstance();
	Singleton* r = Singleton::getInstance();

	std::cout << s << std::endl;
	std::cout << r << std::endl;

	Singleton::getInstance()->print();

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