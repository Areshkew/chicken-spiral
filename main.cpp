#include <iostream>
#include "src/Chicken/chicken.h"
#include "src/HenHouse/henhouse.h"

void ChickenWalk(int &t_steps, Chicken &c, HenHouse &h){
    unsigned short int Amplitude = 1;

    for(int i = 0; i < t_steps; i++){
        unsigned short int X = c.getX();
        unsigned short int Y = c.getY();
        unsigned short int F = c.getSteps();

        h.ChickenTrace(X, Y);

        if(F == 1)
            c.ChangeFacing();
 
        else if(F == ( Amplitude * Amplitude ))
            c.ChangeFacing();

        else if(F == ( Amplitude * (Amplitude + 1) )){
            Amplitude++;
            c.ChangeFacing();
        }

        c.setSteps( F + 1 );
        c.FootStep();  
    }

}

int main(){
    Chicken c = Chicken(Chicken::e_facing::n, 5, 5);
    Chicken c2 = Chicken(Chicken::e_facing::n, 9, 9);
    HenHouse h = HenHouse(15, 15);
    int total_steps = 31;

    ChickenWalk(total_steps, c, h);
    ChickenWalk(total_steps, c2, h);
    h.PrintHH();

    return 0;
}