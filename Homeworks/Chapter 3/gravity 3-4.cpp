#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const int n1=pow(10,8);
const float n2=6.673;
const double g=n2/n1;

void gf(float dp, float m1P, float m2P)
{
    //this function help calculate the gravitational force of attraction between two bodies.
    double force;
    double distance=dp*dp;
    double mass=m1P*m2P;
    force=(g*mass)/distance;

    cout<<"The gravitational force is "<<force<<" dynes."<<endl;


};


int main()
{
 int m1, m2;
 float d;
 string answer;
 cout<<"Hello user. I will help you calculate the gravitational atractive force between 2 bodies based on their mass and distance."<<endl;
 do
 {
    cout<<"Enter the value in grams for the first mass: ";
    cin>> m1;
    cout<<endl;

    cout<<"Enter the value in grams for the second mass: ";
    cin>> m2;
    cout<<endl;

    cout<<"Finally enter the distance in centemeters between the two bodies:";
    cin>>d;
    cout<<endl;
        //conditional to verify values are useful for the formula.
        if (m1<0 || m2<0 || d<0)
        {
            cout<<endl;
            cout<<"Incorrect input. Mass and distance must be positive values. ";
        }
        else
        {
            gf(d,m1,m2);
        }

    cout<<"Would you like to try again?(y/n)"<<endl;
    cin>>answer;
 } while (answer == "y");
 cout<<endl;
 cout<<"Thank you for using our program!";

return 0;
}