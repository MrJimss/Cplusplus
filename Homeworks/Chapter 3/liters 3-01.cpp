#include <iostream>
#include <string>
using namespace std;

const double lpg=0.264179;

double mg( double miles, double liters)
{
    double gallons=liters/lpg;
    double mpg= miles/ gallons;
    return mpg;
};



int main()
{
    double miles, liters,mpg;
    string answer;
    do
    {

        cout<<"Hello user. I will help you calculate the miles per gallon of gasoline from your trip. "<<endl;
        cout<<endl;

        cout<<"Please input the miles traveled:";
        cin>> miles;

        cout<<"Enter the liters of gasoline used: ";
        cin>> liters;

        mpg= mg(miles,liters);

        cout<<endl;
        cout<<"Your fuel economy was: "<<mpg<< " miles per gallon."<<endl;
        cout<<endl;

        cout<<"Would you like to try again? (y/n)"<<endl;
        cin>>answer;
        
    } while (answer == "y");
    
    cout<<"Thank you for trying our calculator. Have a great day!"<<endl;

return 0;
}