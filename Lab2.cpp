#include <iostream>
#include <cmath>
#include <string>

using namespace std;

double principal=1000;
const double Yrate=0.18;
const double Mrate=0.015;
const int payment=50;

double newValue(double);
double interestPaid(double);

int main()
{
     int i=0;
     cout<< "Month     Interest     Balance"<<endl;
     cout<<"0      $"<< "0           $"<< principal<<endl;

     while (principal>payment)
     {
     i++;
     double newPrincipal=newValue(principal);
     double NewInterest=interestPaid(principal);
     cout <<i <<"     $"<< NewInterest<<"      $"<<newPrincipal<<endl;
     
     principal=newPrincipal;   
     }
     cout<< endl;
     cout << "The total amount of moths will be "<< i+1 <<". The last month there will be a final amount will be: $ "<< principal <<endl;
     


     return 0;
}

double newValue(double balance)
{
     double interest= Mrate*balance;
     double newBalance;
     newBalance= balance-(payment-interest);
     return newBalance;
}

double interestPaid(double balance)
{
     double NewInterest=Mrate*balance;
     return NewInterest;
}