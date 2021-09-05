/*
What I want projectile to do:
Have definition in .h
	Definition contents needed:
		Declare private member variables, it's position, speed, sprite, and texture
		Declare public values, such as a constructor, , an 
			instance? or somehow to access the private sprite
			Any functions associated with it, just update?

Here, have a constructor that creates a projectile object instance
	Includes loading texture, and applying texture to sprite
	positions to begin at, speed
This instance will inherit the position x and y of object Player.
	How?
		Function of player to return position. How to call that?
			Maybe: Player::getPosition();
			Or, if need instance of player go through engine.h
Now, I want it to draw. How do I call draw from a different place?
Probaly use an if statement that checks if there's any instances of type projectile?
And, due to there being multiple, add them to a vector, and interate through the vector in the draw function
Then, once it is drawn, start updating the projectile so that it's y cords increase with elapsed time
*/
#include <SFML/Graphics.hpp>
#include "PlayerProj.h"

//Constructor 
PlayerProjectile::PlayerProjectile()
{
	if (!m_Texture.loadFromFile("Assets/S_PlyrProjectile.png"))
	{
		printf("Image for Player projectile not found");
	}
	m_Sprite.setTexture(m_Texture);

	m_Speed = 300;

	//Set sprite origin
	unsigned int pW = m_Sprite.getTexture()->getSize().x;
	unsigned int pH = m_Sprite.getTexture()->getSize().y;
	m_Sprite.setOrigin(pW / 2, pH / 2);

	m_Position.x = 200;
	m_Position.y = 300;
}

sf::Sprite PlayerProjectile::getSprite()
{
	return m_Sprite;
}

void PlayerProjectile::update(float elapsedTime)
{
	m_Position.y -= m_Speed * elapsedTime;
	m_Sprite.setPosition(m_Position);
}