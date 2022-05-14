//
// Created by aparanj on 2022-05-11.
//

#include "Sketch.h"

#include <stdio.h>
#include <stdlib.h>
#include <ctime>



Sketch::Sketch(sf::RenderWindow* window) {

    this->window = window;
    srand((unsigned) time(0));

    for (int i = 0; i < this->nBalls; ++i) {
        this->ballsList.push_back(new Ball(rand()%400,rand()%400,(rand()%100)*0.001,(rand()%100)*0.001, window));
    }





//    this->ball = new Ball(rand()%400,rand()%400,(rand()%100)*0.001,(rand()%100)*0.001, window);


}

void Sketch::draw() const {
    this->window->clear();

    for (auto i=this->ballsList.begin(); i!=ballsList.end(); ++i) {
        (*i)->hit();
        (*i)->move();
        (*i)->draw();
    }

    this->window->display();
}
