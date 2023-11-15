//This is the file Administrator.cpp

#include <iostream> 
#include <string>
#include "Administrator.h"
using std::string; using std::cout; using std::endl; using std::cin;

namespace SavitchEmployees
{
     Administrator::Administrator():SalariedEmployee(), title("No title"), responsibility("No responsibility"), supervisor("No supervisor") {}//deliberately empty
     Administrator::Administrator( const string& n, const string& ssn, double AnnualSalary):SalariedEmployee(n, ssn,AnnualSalary), title("No title"), responsibility("No responsibility"), supervisor("No supervisor") {} //deliberately empty

     void Administrator::setAdminData()
     {
          cout << "Enter the details of the administrator " << getName() << endl; 
          cout << "Enter the administrator's title.: "; 
          getline(cin, title);
          cout << "Enter the company area of responsability: ";
          cin>>responsibility;
          cout << "Enter the name of this administrator's immediate supervisor: "; 
         cin>>supervisor;
     }
     void Administrator::printCheck()
     {
          cout<<"\n________________________\n";
          cout<<"Pay to the order of "<<getName()<<endl;
          cout<<"Title:"<<title<<endl;
          cout<<"Area of responsibility:"<<responsibility<<endl;
          cout<<"Direct supervisor:"<<supervisor<<endl;
          cout<<"The sum of "<<getSalary()<<" Dollars."<<endl;
          cout<<"___________________________________\n";
          cout<<"Check stub non-negotiable\n";
          cout<<"Employee Number:"<<getSsn()<<endl;
          cout<<"Salaried employee. Regular Pay:"<<salary<<endl;
          cout<<"___________________________________\n";
     }
}
