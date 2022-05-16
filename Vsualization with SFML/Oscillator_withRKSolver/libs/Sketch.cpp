//
// Created by aparanj on 2022-05-15.
//

#include "Sketch.h"

Sketch::Sketch(sf::RenderWindow *window) {
    this->window = window;
    this->ball = new Ball(window);
    this->line = new sf::RectangleShape(sf::Vector2f(15,15));
    this->line->setPosition(sf::Vector2f(300,500));
    this->line->setOrigin(0,5);
    this->line->setFillColor(sf::Color::Yellow);
    this->phys = new Physics();
    this->PsiList = Eigen::Matrix2Xf::Zero(2, this->phys->N_t);
    this->phys->calculate();
    this->transform();
//    std::cout << this->PsiList.transpose();

}

void Sketch::draw() {
    this->window->clear(sf::Color::Cyan);
    this->line->setSize(sf::Vector2f(this->PsiList(0,counter%this->phys->N_t)-300, 10));
    this->window->draw(*(this->line));
    this->ball->draw(this->PsiList(0,counter%this->phys->N_t),
                     500);
//    std::cout << this->PsiList(0,counter%this->phys->N_t) <<std::endl;
    this->window->display();
    counter += 1;
}


void Sketch::transform() {
    Eigen::Matrix2f transMat(2,2);
    Eigen::Array2f shift(2,1);
    float scale = 50;
    shift << 300,500;
    transMat << 1,0,0,1;

    this->PsiList = (scale * (transMat*this->phys->PsiList)).array();
    this->PsiList.row(0) = this->PsiList.row(0).array() + shift(0);
    this->PsiList.row(1) = this->PsiList.row(1).array() + shift(1);

}