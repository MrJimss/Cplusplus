/*
AUTHOR:CARLOS BARROS BUSTAMANTE
DESCRIPTION: THE PROGRAM WILL CALCULATE THE DISTANCE TRAVELED BY AN OBJECTIN FREEFALL ASUMING NO FRICTION AND ONLY REQUIRING THE USER TO INPUT THE TOTAL TIME OF THE FALL


*/


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

float FreefallDistance (double timeParameter)
{
    double timeParameter2= timeParameter*timeParameter;

    //accelaarion is declared as a constant due to no friction
    // value n2 equals to acceleration* 1/2
    const int n2 = 16;
    float distance = n2 * timeParameter2;
    return distance;
}

int main()
{
    double time; 
    
 cout<<"Hello user. Welcome to the freefall calculator."<<endl;
 cout<<"I will help you calculate the distance covered by an object in freefall."<<endl;
 cout<<"Please input -in seconds- the time the object is falling: "<<endl;
 cin>> time;
 cout<<endl;
 FreefallDistance(time);
 cout<<"Thank you. The object will cover a total distance in freefall of aproximatedly "<< FreefallDistance(time)<<" feet."<<endl;


return 0;
}