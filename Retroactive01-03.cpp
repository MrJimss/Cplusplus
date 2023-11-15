/*AUTHOR:CARLOS BARROS BUSTAMANTE
DESCRIPTION: THE PROGRAM WILL TAKE INPUT FROM THE USER TO CALCULATE A RETROACTIVE PAY OWED FOR SIX MONTHS AS WELL AS THE NEW YEARLY AND MONTHLY SALARIES
*/


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
     cout<< "Welcome. Let me calculate your new salary."<<endl;
     cout<< "Please input your previous annual salary: "<<endl;
     cin>> salary;

     newpay=annualSalary(salary);

     //to find the monthly we divide by 12 months
     newmonthly= newpay/12;

     //to find the retroactive pay owed for 6 months we find the annual difference between both the new and the old salary and divide by 12 (motnhs)
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
