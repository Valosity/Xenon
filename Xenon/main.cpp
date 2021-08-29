#include <sfml\Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(512, 512), "Xenon", sf::Style::Default);

    while (window.isOpen()) {
        sf::Event ev;
        while (window.pollEvent(ev))
        {
            if (ev.type == ev.Closed) {
                window.close();
            }
        }
    }
}

