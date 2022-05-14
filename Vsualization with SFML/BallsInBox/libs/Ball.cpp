//
// Created by aparanj on 2022-05-12.
//

#include "Ball.h"
#include "iostream"

Ball::Ball(float x, float y, float vx, float vy, sf::RenderWindow* window) : shape(10.f, 30)
{
    this->x = x;
    this->y = y;
    this->vx = vx;
    this->vy = vy;
    this->window = window;
    this->shape.setFillColor(sf::Color::Green);
    this->shape.setPosition(this->x,this->y);
    this->shape.setOutlineColor(sf::Color::White);
    this->shape.setOutlineThickness(2);

}

void Ball::move() {
    this->x += this->vx;
    this->y += this->vy;
    this->shape.setPosition(this->x, this->y);
//    std::cout << this->x;
}


void Ball::draw() const{
    this->window->draw(this->shape);
}

void Ball::hit() {
    if (this->x <0 | this->x >800){
        this->vx *= -1;
    }
    if (this->y <0 | this->y >1200){
        this->vy *= -1;
    }

}