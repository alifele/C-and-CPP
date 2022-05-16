//
// Created by aparanj on 2022-05-15.
//

#include "Physics.h"


Physics::Physics(): Theta(this->N_t){
    this->tList = Eigen::ArrayXf::LinSpaced(this->N_t, 0, 10);
//    std::cout << (this->tList*this->w).sin() << std::endl;
    this->Theta = 0.5*(this->w * this->tList).sin();
    this->pos.col(0) = (this->Theta).sin();
    this->pos.col(1) = (-this->Theta).cos();


}