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
		m_Player.moveLeft(true);
	}
	else
	{
		m_Player.moveLeft(false);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		m_Player.moveRight(true);
	}
	else
	{
		m_Player.moveRight(false);
	}
	
}

