#include <iostream>

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include <SFML/System.hpp>

#include "libs/Physics.h"
#include "libs/Sketch.h"
#include "libs/PlayGround.h"

int main()
{
//    PlayGround play;

    auto *physics = new Physics();
    std::cout << "Hello" << std::endl;
    Sketch sketch(new sf::RenderWindow(sf::VideoMode(800, 1200), "SFML works!"), physics);


    while (sketch.window->isOpen())
    {
        sf::Event event;
        while (sketch.window->pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                sketch.window->close();
        }

        sketch.draw();
    }

    return 0;

}

