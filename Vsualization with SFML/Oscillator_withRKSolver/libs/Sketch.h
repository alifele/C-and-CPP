//
// Created by aparanj on 2022-05-15.
//

#ifndef OSCILLATOR_SKETCH_H
#define OSCILLATOR_SKETCH_H

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "Ball.h"
#include "Physics.h"



class Sketch {

public:
    sf::RenderWindow *window = nullptr;
    sf::RectangleShape *line;
    Ball *ball = nullptr;
    Physics *phys = nullptr;
    Eigen::Matrix2Xf PsiList;
    int counter = 0;

    explicit Sketch(sf::RenderWindow* window);
    void draw();
    void transform();
};


#endif //OSCILLATOR_SKETCH_H
