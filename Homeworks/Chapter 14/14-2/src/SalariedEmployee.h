//This is the header file SalariedEmployee.h.
//This is the interface for the class SalariedEmployee.
#pragma once
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string> 
#include "employee.h"
using std::string;

namespace SavitchEmployees
{
     class SalariedEmployee:public Employee
     {
     protected:
          double salary; //annual
     public:
          SalariedEmployee();
          SalariedEmployee(const string& theName, const string& theSsn, double theAnnualSalary);
          void setSalary(double newSalary); 
          double getSalary() const;
          void printCheck(); 
     }; 
}
#endif
//SavitchEmployee
