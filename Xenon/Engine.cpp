#include <SFML/Graphics.hpp>
#include "Engine.h"

Engine::Engine()
{
	m_Window.create(sf::VideoMode(650, 700), 
		"Xenon", 
		sf::Style::Titlebar | sf::Style::Close);

}

void Engine::start()
{
	//Timing 
	sf::Clock clock;

	//Game Loop
	while (m_Window.isOpen())
	{
		sf::Event event;
		while (m_Window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				m_Window.close();
			}
		}

		//Restart clock and save elapsed time
		sf::Time dt = clock.restart();

		//Turn delta time into a fraction
		float dtS = dt.asSeconds();
		
		//Call those private function
		input();
		update(dtS);
		draw();
		
	}
}