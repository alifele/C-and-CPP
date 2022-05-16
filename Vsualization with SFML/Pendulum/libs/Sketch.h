//
// Created by aparanj on 2022-05-11.
//

#ifndef NEWTEST_SKETCH_H
#define NEWTEST_SKETCH_H
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "Ball.h"
#include "Physics.h"
# include <vector>

class Sketch {
public:
    sf::RenderWindow* window = nullptr;
    Physics *physics;
    Ball *ball = nullptr;
    int nBalls = 1400;
    std::vector<Ball*> ballsList;
    Eigen::ArrayX2f pos;
    Eigen::Matrix2f transMat;
    Eigen::Array2f shift;
    int counter = 0;

    explicit Sketch(sf::RenderWindow* window, Physics* physics);
    void Transform(Physics *physics);
    void draw();

};


#endif //NEWTEST_SKETCH_H
