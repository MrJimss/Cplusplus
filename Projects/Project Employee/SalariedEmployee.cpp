//This is the file salariedemployee.cpp
//This is the implementation for the class SalariedEmployee. //The interface for the class SalariedEmployee is in
//the header file salariedemployee.h.
#include <iostream>
#include <string>
#include "SalariedEmployee.h"
using std::string; using std::cout; using std::endl;

namespace SavitchEmployees
{
     SalariedEmployee::SalariedEmployee():Employee(), salary(0){} 
     SalariedEmployee::SalariedEmployee(const string& theName, const string& theNumber, double theWeeklyPay):Employee(theName, theNumber), salary(theWeeklyPay){} 
     void SalariedEmployee::setSalary(double newSalary) {salary=newSalary;} 
     double SalariedEmployee::getSalary() const {return salary;}
     void SalariedEmployee::printCheck()
     {
          setNetPay(salary);
          cout << "\n________________________________________________\n"; 
          cout << "Pay to the order of " << getName() << endl;
          cout << "The sum of " << getNetPay() << " Dollars\n";
          cout << "_________________________________________________\n";
          cout << "Check Stub NOT NEGOTIABLE \n";
          cout << "Employee Number: " << getSsn() << endl;
          cout << "Salaried Employee. Regular Pay: " << salary << endl;
          cout << "_________________________________________________\n";
     }
}
