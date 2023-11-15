#include <iostream>
#include <cmath>
using namespace std;

double annualSalary (double PrevSalParameter);

int main()
{
     double salary;
     double newpay;
     double newmonthly;
     double owed;

     cout<< endl;
     cout<< "Welcome. Lets calculate your new salary"<<endl;
     cout<< "Please input your previous annual salary"<<endl;
     cin>> salary;

     newpay=annualSalary(salary);
     newmonthly= newpay/12;
     owed= (newpay-salary)/2;

     cout << "The retroactive pay owed for six months is: $"<< owed<<endl;
     cout<<"Your new annual salary is: $"<< newpay<< endl;
     cout <<"Your new monthly salary is: $"<< newmonthly <<endl;

     return 0;
}

double annualSalary(double PrevSalParameter)
{
     double newsalary;
     const double increase= 0.076;

     newsalary=(PrevSalParameter*(1+increase));
     return (newsalary);
}