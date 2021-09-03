#include <SFML/Graphics.hpp>
#include "Engine.h"

void Engine::update(float dtS)
{
	m_Player.update(dtS);
}