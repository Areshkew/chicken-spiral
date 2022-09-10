#include <iostream>
#include "henhouse.h"

void HenHouse::PrintHH(){
    for(auto &r : HH){
        for(auto &c : r){
            std::cout << c << " ";
        }
        std::cout << std::endl;
    }
}

void HenHouse::ChickenTrace(unsigned short int &R, unsigned short int &C){
    this->HH[R][C]++;
}