#include <SFML/Graphics.hpp>
#include "Player.h"



Player::Player()
{
	//Set player speed
	m_Spd = 300;

	//Initialize these variables
	m_LeftPress = false;
	m_RightPress = false;

	//Set player texture
	if (!m_Tex.loadFromFile("Assets/S_player.png"))
	{
		//Error
		printf("No image for Player found");
	}
	m_Spr.setTexture(m_Tex);

	//Set sprite origin
	unsigned int pW = m_Spr.getTexture()->getSize().x;
	unsigned int pH = m_Spr.getTexture()->getSize().y;
	m_Spr.setOrigin(pW / 2, pH / 2);

	//Set starting position of player
	m_Pos.x = 325;
	m_Pos.y = 550;
}

//Make the private sprite p_Spr avaliable to draw() function
sf::Sprite Player::getSprite()
{
	return m_Spr;
}

void Player::moveLeft(bool value)
{
	m_LeftPress = value;
}

void Player::moveRight(bool value)
{
	m_RightPress = value;
}

sf::Vector2f Player::getPosition()
{
	return m_Pos;
}

void Player::update(float elapsedTime)
{
	if (m_RightPress)
	{
		m_Pos.x += m_Spd * elapsedTime;
	}
	if (m_LeftPress)
	{
		m_Pos.x -= m_Spd * elapsedTime;
	}

	m_Spr.setPosition(m_Pos);
}