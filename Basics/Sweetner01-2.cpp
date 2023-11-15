#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
 double grs, mouse, dieter, loss;

 cout<<"Hello, friend. Welcome. I will help you calculate how much diet soda you can drink without dying."<<endl;
 cout<<"First, tell me how many grams of artificial sweetner isnecessary to kill a mouse:"<<endl;
 cin>> grs;

 cout<< "Please, tell me the weight in grams of this mouse."<<endl;
 cin>> mouse;

 cout<<"Now, tell me your current weight in kilos:"<<endl;
 cin>>dieter;

 cout<<"Finally, tell me how many kilos you want to lose."<<endl;
 cin>> loss;

 const double sweet = 0.001;
 const double density= 1/0.911; 
 //common density for diet soda = 0.911 g/L

 std::cout << std::fixed;
 std::cout << std::setprecision(1);
 
 double deathRatio = mouse/grs;
 double finalWeight= (dieter-loss)*1000;
 double maxSweet = finalWeight/deathRatio;

 double maxSoda= maxSweet/sweet;
 double sodaLiters=maxSoda*density;
 int cans=sodaLiters/0.25;



 cout<<"The maximum amount of soda that you will be available to drink without dying is: "<<sodaLiters<<" liters. That equals to approximatedly " << cans <<" cans of soda." <<endl;


return 0;
}