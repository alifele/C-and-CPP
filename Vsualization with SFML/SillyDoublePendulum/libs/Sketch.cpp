//
// Created by aparanj on 2022-05-16.
//

#include "Sketch.h"


Sketch::Sketch(sf::RenderWindow *window) {
    this->window = window;
    this->shift.x = window->getSize().x;
    this->shift.y = window->getSize().y;
    this->shift.x /= 2;
    this->shift.y /= 15;
    this->border = new sf::RectangleShape(sf::Vector2f(this->window->getSize().x-10, this->window->getSize().y-10));
    this->border->setFillColor(sf::Color::Transparent);
    this->border->setPosition(5,5);
    this->border->setOutlineThickness(10);

    this->pivot = new Pivot(this->window, this->shift);
    this->line1 = new Line(this->window);
    this->line2 = new Line(this->window);
    this->ball1 = new Ball(this->window);
    this->ball2 = new Ball(this->window);


}


void Sketch::draw() {
    this->pos.x = 70*std::sin(counter)+300;
    this->pos.y = 70*std::cos(counter)+300;
    this->pos2.y = 120*std::sin(-0.2*counter)+500;
    this->pos2.x = 80*std::sin(-counter)+500;
    this->window->clear(sf::Color(144,144,144));
    this->window->draw(*this->border);
    this->line1->setValues(this->pos, this->shift);
    this->line1->draw();
    this->line2->setValues(this->pos2, this->pos);
    this->line2->draw();
    this->pivot->draw();
    this->ball1->setPos(this->pos);
    this->ball1->draw();
    this->ball2->setPos(this->pos2);
    this->ball2->draw();
    this->counter += 0.1/5;

//    std::cout << (this->window->getSize()) << std::endl;

    this->window->display();
}
