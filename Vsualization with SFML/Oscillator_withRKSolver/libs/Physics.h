//
// Created by aparanj on 2022-05-15.
//

#ifndef OSCILLATOR_PHYSICS_H
#define OSCILLATOR_PHYSICS_H
#include "Eigen/Dense"
#include <cmath>
#include <iostream>

class Physics {
public:
    float k = 10;
    float m = 0.1;

    int l = 12;
    int N_t = pow(2, l);
    int t_final = 10;
    Eigen::ArrayXf tList = Eigen::ArrayXf::LinSpaced(N_t, 0, t_final);
    Eigen::Matrix2Xf PsiList = Eigen::Matrix2Xf::Zero(2, N_t);
    float h = tList(1) - tList(0);

    Physics();
    void calculate();
    Eigen::Vector2f F(float t, Eigen::Vector2f Psi);
};


#endif //OSCILLATOR_PHYSICS_H
