/* 

AUTHOR: CARLOS BARROS BUSTAMANTE
Purpose: Create a program that easily converts that Fahrenheit to Celsisus

Date: 09/13/22

*/


#include <iostream>
#include <string>
using namespace std;

const double n1=5.0;
const double n2=9.0;
const double n3= n1/n2;

 double formula (double );

int main() 
{
    double f;
    
    cout << "Welcome to the temperature calculator"<< endl;
    cout<< "It will help you convert Fahrenheit to Celsius"<<endl;
    cout<< "Please input the value in Fahrenheit you wish to convert"<<endl;
    //Takes input from the user 
    cin>> f;

    //uses a function to do the calculations in an organized manner
    double c=formula(f);

    //dispalys the values for the user
    cout<<"For a Fahrenheit temperature of " << f<< " degrees,"<<endl;
    cout<<" The equivalent Celsius temperature is "<<c<<" degrees"<< endl;
    return 0;
}

double  formula(double f2)
{
    double subtotal= f2-32;
    double total = n3*subtotal;
    return total;
}