#include <sfml\Graphics.hpp>


void draw()
{
    sf::Image plyrImg;
    if (!plyrImg.loadFromFile("S_player.jpg"))
    {
        //Error
        printf("No image for Player found");
    }
}

int main()
{
    sf::RenderWindow window(sf::VideoMode(650, 700), "Xenon", sf::Style::Default);

    while (window.isOpen()) {
        sf::Event ev;
        while (window.pollEvent(ev))
        {
            switch (ev.type) 
            {
            case sf::Event::Closed:
                window.close();
                break;

            }
        }
        window.clear(sf::Color::Black);
        draw();
        window.display();
        
    }
    return 0;
}

