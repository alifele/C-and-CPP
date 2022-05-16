//
// Created by aparanj on 2022-05-15.
//

#ifndef OSCILLATOR_BALL_H
#define OSCILLATOR_BALL_H


#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/Graphics/CircleShape.hpp>

class Ball {
public:
    sf::RenderWindow *window;
    int rad = 20;
    sf::Color color = sf::Color::Red;
    sf::CircleShape *circle = new sf::CircleShape(rad);




    Ball(sf::RenderWindow *window);
    void draw(float x, float y);


};


#endif //OSCILLATOR_BALL_H
