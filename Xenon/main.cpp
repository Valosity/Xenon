#include <sfml\Graphics.hpp>

void draw()
{

}
int main()
{
    sf::RenderWindow window(sf::VideoMode(650, 700), "Xenon", sf::Style::Titlebar | sf::Style::Close);

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
        sf::Texture plyrImg;
        if (!plyrImg.loadFromFile("Assets/S_player.png"))
        {
            //Error
            printf("No image for Player found");
        }
        sf::Sprite plyrSpr;
        plyrSpr.setTexture(plyrImg);
        unsigned int plyrWidth = plyrSpr.getTexture()->getSize().x;
        unsigned int plyrHeight = plyrSpr.getTexture()->getSize().y;
        plyrSpr.setOrigin(plyrWidth / 2, plyrHeight / 2);
        sf::Vector2u size = window.getSize();
        unsigned int width = size.x;
        unsigned int height = size.y;
        plyrSpr.setPosition(width / 2, height - 100);
        window.draw(plyrSpr);
        window.display();
        
    }
    return 0;
}

