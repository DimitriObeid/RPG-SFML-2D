#include "Game.h"

/** Static methods */

// Initialisation methods
void Game::initWindow()
{
    // Creating a SFML window using options from a window.ini file.
	this->window = new sf::RenderWindow(sf::VideoMode(1920, 1080), "SFML works!");
}


/** Constructors / destructors */
Game::Game()
{
    // We call the game initialisation method.
    this->initWindow();
}

Game::~Game()
{
    delete this->window;
}


/** Methods */
//
void Game::render()
{
    this->window->clear();

    // Render items
   // this->window->draw(this->shape);
    this->window->display();
}

//
void Game::run()
{
    	while (this->window->isOpen())
    	{
            this->update();
            this->render();
        }

}

//
void Game::update()
{
    this->updateSFMLEvents();
}

//
void Game::updateSFMLEvents()
{
	while (this->window->pollEvent(this->sfEvent)) {
        if (this->sfEvent.type == sf::Event::Closed)
        	this->window->close();
 	}
}
