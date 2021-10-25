#include <iostream>
#include <ctime>
#include <cstdlib>

#ifdef __linux__
	#include "SFML/Graphics.hpp"

#elif _WIN32
	#include "SFML\Graphics.hpp"

#endif

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "SFML works!");
    	sf::CircleShape shape(100.f);
    	shape.setFillColor(sf::Color::Green);

    	while (window.isOpen())
    	{
        	sf::Event event;

		while (window.pollEvent(event))
      		{
        		if (event.type == sf::Event::Closed)
            			window.close();
 	       }

       		window.clear();
      		window.draw(shape);
        	window.display();
    	}

	return 0;
}