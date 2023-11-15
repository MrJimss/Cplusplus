#pragma once

#include <string>
#include "SalariedEmployee.h"

using std::string;

namespace SavitchEmployees
{
     class Administrator:public SalariedEmployee
     {
          private:
          string title;
          string responsibility; 
          string supervisor;

          public:
          Administrator();
          Administrator( const string& n,const string& ssn, double AnnualSalary);
          void setAdminData(); 
          void printCheck();

     }; 
}

//SavitchEmployee
