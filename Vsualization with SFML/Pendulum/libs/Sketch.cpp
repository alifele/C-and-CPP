//
// Created by aparanj on 2022-05-11.
//

#include "Sketch.h"

#include <stdio.h>
#include <stdlib.h>
#include <ctime>



Sketch::Sketch(sf::RenderWindow* window, Physics* physics) : pos(physics->N_t, 2){
//    this->ballsList.reserve(this->nBalls);
    this->window = window;
    this->ball = new Ball(0,0,0,0,window);
    srand((unsigned) time(0));

    this->transMat << 1,0,0,-1;
    this->physics = physics;
    this->shift << 400,50;
    this->pos = Eigen::ArrayX2f::Random(physics->N_t, 2);
    this->Transform(physics);

//    for (int i = 0; i < this->nBalls; ++i) {
//        this->ballsList.push_back(new Ball(rand()%400,rand()%400,(rand()%100)*0.001,(rand()%100)*0.001, window));
//    }

}

void Sketch::draw() {
    this->window->clear();

//    for (auto i=this->ballsList.begin(); i!=ballsList.end(); ++i) {
//        (*i)->hit();
//        (*i)->move();
//        (*i)->draw();
//    }
//    ball->setPos(this->pos(this->counter%this->physics->N_t,0),
//                 this->pos(this->counter%this->physics->N_t, 1));
//    ball->x = this->pos(this->counter%this->physics->N_t,0);
//    ball->y = this->pos(this->counter%this->physics->N_t, 1);
    this->ball->draw(this->pos(this->counter%this->physics->N_t,0), this->pos(this->counter%this->physics->N_t, 1));
//    this->ball->draw(11, 11);
//    std::cout << this->pos(this->counter%this->physics->N_t,0) << std::endl;

    this->window->display();
    this->counter += 1;
}

void Sketch::Transform(Physics *physics) {
//    this->pos = (this->transMat * (physics->pos.transpose()).matrix()).transpose().array();
    this->pos = physics->pos;
    this->pos.col(0) *= 800;
    this->pos.col(1) *= 800;
    this->pos.col(0) += 400;
    this->pos.col(1) += 50;
}
