#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <ctime>
#include <cstdlib>

#ifdef __linux__
	#include "SFML/Audio.hpp"
	#include "SFML/Graphics.hpp"
	#include "SFML/Network.hpp"
	#include "SFML/System.hpp"
	#include "SFML/Window.hpp"

#elif _WIN32
	#include "SFML\Audio.hpp"
	#include "SFML\Graphics.hpp"
	#include "SFML\Network.hpp"
	#include "SFML\System.hpp"
	#include "SFML\Window.hpp"

#endif

class Game
{
/** Accessors */
private:
	// Attributes
	sf::Event sfEvent;
	sf::RenderWindow *window;

	// Initialization methods
	void initWindow();

public:
	// Constructors / destructors
	Game();
	virtual ~Game();

	/** Methods */
	void render();
	void run();
	void update();
	void updateSFMLEvents();
};

#endif
