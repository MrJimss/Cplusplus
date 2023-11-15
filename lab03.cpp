#include <iostream>
#include <string>
#include <cstring>
using namespace std;

double mileageCount(double litersParameter , double milesParameter);
const double liter =3.79;
double miles;
double liters;

int main()
{
    string answer;
    double milesgallon;
    do{
    cout<<"Hello user. Welcome. Please enter the amount of liters of gasoline consumed during the trip: "<<endl;
    cin>> liters;
    cout<<"Thank you. Please now enter the amount of miles traveled."<<endl;
    cin>> miles;
    milesgallon= mileageCount( liters, miles);
    cout<<"Your vehicle traveled "<<milesgallon<<" miles per gallon."<<endl;

    cout<<"would you like to continue? (y/n)"<<endl;
    cin>>answer;
    } while (answer=="y"||answer=="Y");
    cout<<"Thank you. Have a nice day"<<endl;
    return 0;
}

double mileageCount(double litersParameter, double milesParameter)
{
    double milespergallon;
    double gallon=litersParameter/liter;
    milespergallon= milesParameter/gallon;
    return milespergallon;
}