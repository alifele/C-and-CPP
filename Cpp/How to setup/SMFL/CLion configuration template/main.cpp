#include <iostream>

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include <SFML/System.hpp>
//
int main()
{
    sf::RenderWindow window(sf::VideoMode(640, 480), "SFML works!");
    sf::CircleShape shape(150.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}
