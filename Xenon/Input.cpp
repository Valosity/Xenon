#include <SFML/Graphics.hpp>
#include "Engine.h"

void Engine::input()
{
	//Handle closing window, by escape or the close button
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
	{
		m_Window.close();
	}

	//Movement input handling
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		m_Player.moveLeft();
	}
	else
	{
		m_Player.stopLeft();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		m_Player.moveRight();
	}
	else
	{
		m_Player.stopRight();
	}
}

