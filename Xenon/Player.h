#pragma once
#include <SFML/Graphics.hpp>

class Player
{
private:
	//Player position, sprite, and texture
	sf::Vector2f m_Pos;
	sf::Sprite m_Spr;
	sf::Texture m_Tex;

	bool m_LeftPress;
	bool m_RightPress;

	float m_Spd;
public:
	//Constructor
	Player();

	//Gets sprite so can be used in main
	sf::Sprite getSprite();

	//Movement functions that can be called
	void moveLeft();
	void moveRight();

	void stopLeft();
	void stopRight();

	//Update player
	void update(float elapsedTime);
};