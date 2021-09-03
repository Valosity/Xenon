#pragma once
#include <SFML/Graphics.hpp>
#include "Player.h"

class Engine
{
private:
	//The renderwindow
	sf::RenderWindow m_Window;

	/* Background Sprite and Texture
	sf::Sprite m_BackgrdSpr;
	sf::Texture m_BackgrdTex;
	*/

	//Instance of player
	Player m_Player;

	//Private functions for internal use only
	void input();
	void update(float dtS);
	void draw();

public:
	//Constructor
	Engine();

	//Start function to call all private functions
	void start();

};