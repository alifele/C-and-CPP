//
// Created by aparanj on 2022-05-15.
//

#ifndef NEWTEST_PHYSICS_H
#define NEWTEST_PHYSICS_H

#include <cmath>
#include "iostream"
#include "Eigen/Dense"
#include "cmath"


class Physics {
public:
    int N_t = 900000;
    Eigen::ArrayXf tList;
    Eigen::ArrayXf Theta;
    Eigen::ArrayX2f pos = Eigen::ArrayX2f::Zero(N_t, 2);
    float l = 1;
    float g = 10;
    float w = std::sqrt(g/l);



    Physics();
};


#endif //NEWTEST_PHYSICS_H
