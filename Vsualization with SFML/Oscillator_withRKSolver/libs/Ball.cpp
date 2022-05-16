//
// Created by aparanj on 2022-05-15.
//

#include "Ball.h"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

Ball::Ball(sf::RenderWindow *window) {
    this->window = window;
    this->circle->setFillColor(this->color);
    this->circle->setOrigin(this->rad, this->rad);
}

void Ball::draw(float x, float y){
    this->circle->setPosition(x, y);
    this->window->draw(*(this->circle));
}