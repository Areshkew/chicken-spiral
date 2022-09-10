#include <iostream>

#include "chicken.h"

void Chicken::PrintChicken(){
    std::cout << "Facing : " << facing << "\nX : " << p_X << "\nY :" << p_Y << std::endl;
}

void Chicken::ChangeFacing(){
    if(this->facing == n)
        this->facing = e;

    else if(this->facing == e)
        this->facing = s;

    else if(this->facing == s)
        this->facing = w;

    else if(facing == w)
        this->facing = n;

}

void Chicken::FootStep(){
    if(this->facing == n)
        this->p_X--;

    else if(this->facing == e)
        this->p_Y++;

    else if(this->facing == s)
        this->p_X++;

    else if(facing == w)
        this->p_Y--;
}

unsigned short int Chicken::getSteps(){
    return steps;
}

void Chicken::setSteps(unsigned short int s){
    this->steps = s;
}

unsigned short int Chicken::getX(){
    return this->p_X;
}

unsigned short int Chicken::getY(){
    return this->p_Y;
}

