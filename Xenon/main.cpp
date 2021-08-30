#include <sfml\Graphics.hpp>

void draw()
{

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
        sf::Texture plyrImg;
        if (!plyrImg.loadFromFile("Assets/S_player.png"))
        {
            //Error
            printf("No image for Player found");
        }
        plyrImg.setSmooth(true);
        sf::Sprite plyrSpr;
        plyrSpr.setTexture(plyrImg);
        window.draw(plyrSpr);
        window.display();
        
    }
    return 0;
}

