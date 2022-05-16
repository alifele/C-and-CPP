//
// Created by aparanj on 2022-05-15.
//

#include "PlayGround.h"


PlayGround::PlayGround(): mat(3,3){
    this->tList = Eigen::ArrayXf::LinSpaced(100,0,10);
    Eigen::ArrayXf arr = Eigen::ArrayXf::LinSpaced(9,1,9);
    this->mat << 1,2,3,4,5,6,7,8,9;
//    std::cout << arr <<std::endl;

    std::cout <<  this->mat.block(1,1,2,2) << std::endl;
}