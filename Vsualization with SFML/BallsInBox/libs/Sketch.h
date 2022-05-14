//
// Created by aparanj on 2022-05-11.
//

#ifndef NEWTEST_SKETCH_H
#define NEWTEST_SKETCH_H
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "Ball.h"
# include <vector>

class Sketch {
public:
    sf::RenderWindow* window = nullptr;
    Ball *ball = nullptr;
    std::vector<Ball*> ballsList;
    int nBalls = 1400;

    explicit Sketch(sf::RenderWindow* window);
    void draw() const;

};


#endif //NEWTEST_SKETCH_H
