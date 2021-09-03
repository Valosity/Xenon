#include <SFML/Graphics.hpp>
#include "Engine.h"

void Engine::draw()
{
	//Clear last frame
	m_Window.clear(sf::Color::Black);

	//Draw the player
	m_Window.draw(m_Player.getSprite());

	//Show everything drawn since last draw call
	m_Window.display();
}