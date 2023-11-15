#include <iostream>
#include <cmath>
using namespace std;

double distance(double timeParameter);
int main ()
{
     double time;
     double f;
     cout << "Greetings. Welcome to the freefall calculator."<<endl;
     cout << "Please enter any amount in seconds for the object to fall: \n";
     cin >> time; 

     if (time>=0)
     {
          f=distance (time);
          cout<< "The distance the object fell for "<< time
              << " seconds was: "<< f;
     }
     else
     {
          cout<< "Please enter a valid number";
     }
     return 0;
}

double distance (double timeParameter)
{
     double gravity = 32;
     double freefall;
     double t=pow(timeParameter,2);

     freefall=0.5*gravity*t;
     return (freefall);
}