#pragma once
#include <SFML/Graphics.hpp>

class PlayerProjectile
{
private:
	//Display values
	sf::Sprite m_Sprite;
	sf::Texture m_Texture;
	sf::Vector2f m_Position;

	//Variables
	float m_Speed;

public:
	//Constructor
	PlayerProjectile();

	//Allow sprite to be accessed publically, through getSprite function
	sf::Sprite getSprite();

	//Update position/status
	void update(float elapsedTime);
};