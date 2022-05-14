//
// Created by aparanj on 2022-05-12.
//

#ifndef NEWTEST_BALL_H
#define NEWTEST_BALL_H


#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

class Ball {
public:
    float x;
    float y;
    float vx;
    float vy;
    sf::RenderWindow* window = nullptr;
    sf::CircleShape shape;

    Ball(float x, float y, float vx, float vy, sf::RenderWindow* window);
    void move();
    void draw() const;
    void hit();
};


#endif //NEWTEST_BALL_H
