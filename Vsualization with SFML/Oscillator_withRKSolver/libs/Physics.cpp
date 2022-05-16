//
// Created by aparanj on 2022-05-15.
//

#include "Physics.h"

Physics::Physics() {
    this->PsiList(0,0) = 4;
    this->PsiList(1,0) = 4;
}

void Physics::calculate() {
    int i = 0;
    float t;
    Eigen::Vector2f psi = Eigen::Vector2f::Zero();
    Eigen::Vector2f f0;
    Eigen::Vector2f f1;
    Eigen::Vector2f f2;
    Eigen::Vector2f f3;
    while(i<this->tList.size()-1){
        std::cout << i << std::endl;
        t = tList(i);
//        psi(0) = PsiList(0,i);
//        psi(1) = PsiList(1,i);
        psi = PsiList.col(i);
        f0 = F(t, psi);
        f1 = F(t+this->h/2, psi+f0*this->h/2);
        f2 = F(t+this->h/2, psi+f1*this->h/2);
        f3 = F(t+this->h, psi+f2*this->h);
        psi += this->h/6 * (f0+2*f1+2*f2+f3);
        i+=1;
        PsiList.col(i) = psi;
//        PsiList(0,i) = psi(0);
//        PsiList(1,i) = psi(1);
    }

}

Eigen::Vector2f Physics::F(float t, Eigen::Vector2f Psi) {
    Eigen::Vector2f result = Eigen::Vector2f::Zero();
    result(0) = Psi(1);
    result(1) = -this->k/this->m * Psi(0);
    return result;
}
