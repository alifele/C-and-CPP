//
// Created by aparanj on 2022-05-16.
//

#ifndef DOUBLEPENDULUM_SKETCH_H
#define DOUBLEPENDULUM_SKETCH_H

#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "iostream"
#include "Pivot.h"
#include "Line.h"
#include "Ball.h"

class Sketch {
public:
    sf::RenderWindow *window;
    sf::RectangleShape *border;
    sf::Vector2f shift = {0.0,0.0};
    Pivot *pivot = nullptr;
    Line *line1 = nullptr;
    Line *line2 = nullptr;
    Ball *ball1 = nullptr;
    Ball *ball2 = nullptr;
    sf::Vector2f pos = {100,500};
    sf::Vector2f pos2 = {400,800};
    float counter = 0;


    Sketch(sf::RenderWindow *window);
    void draw();
};


#endif //DOUBLEPENDULUM_SKETCH_H
