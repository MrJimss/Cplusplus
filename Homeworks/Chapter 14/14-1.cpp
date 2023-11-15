#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

class SalariedEmployees
{
protected:
     string name;
     string ssn;
     double salary;
public:
     SalariedEmployees(){name="no name";ssn="00000";salary=0.0;};
     SalariedEmployees(const string& theName, const string& theSsn, double WeeklySalary):name(theName),ssn(theSsn),salary(WeeklySalary){};
     SalariedEmployees(const SalariedEmployees& se):salary(se.salary),name(se.name),ssn(se.ssn){};
     double getSalary(){return salary;};
     string getName(){return name;}
     string getSsn(){return ssn;}
     void setSalary(double newSalary){salary=newSalary;};
     void printcheck();
};
void SalariedEmployees::printcheck()
{
     cout<<"\n________________________\n";
     cout<<"Pay to the order of "<<getName()<<endl;
     cout<<"The sum of "<<getSalary()<<" Dollars."<<endl;
     cout<<"___________________________________\n";
     cout<<"Check stub non-negotiable\n";
     cout<<"Employee Number:"<<getSsn()<<endl;
     cout<<"Salaried employee. Regular Pay:"<<salary<<endl;
      cout<<"___________________________________\n";
}

class Administrator:public SalariedEmployees
{
     protected:
          string title;
          string area;
          string supervisor;
     public:
          Administrator():SalariedEmployees(){title="none", area="default", supervisor="you";};
          Administrator(SalariedEmployees& se1,string t, string a, string s):SalariedEmployees(se1),title(t),area(a),supervisor(s){};
          void setSupervisor(string s){supervisor=s;};
          void setData(double s,string n, string ssn,string t, string a, string sup );
          void print();
          void printcheck();
};

void Administrator::setData(double s,string n, string id,string t, string a, string sup)
{
     salary=s;
     name=n;
     ssn=id;
     title=t;
     area=a;
     supervisor=sup;
}
void Administrator::print()
{
     cout<<"The Administrator has the following information in the database:"<<endl;
     cout<<"Salary:"<<salary<<endl;
     cout<<"Name:"<<name<<endl;
     cout<<"Title:"<<title<<endl;
     cout<<"ID:"<<ssn<<endl;
     cout<<"Direct supervisor:"<<supervisor<<endl;
     cout<<"Area of expertise:"<<area<<endl;
}
void Administrator::printcheck()
{
      cout<<"\n________________________\n";
     cout<<"Pay to the order of "<<getName()<<endl;
     cout<<"Title:"<<title<<endl;
     cout<<"Area of expertise:"<<area<<endl;
     cout<<"Direct supervisor:"<<supervisor<<endl;
     cout<<"The sum of "<<getSalary()<<" Dollars."<<endl;
     cout<<"___________________________________\n";
     cout<<"Check stub non-negotiable\n";
     cout<<"Employee Number:"<<getSsn()<<endl;
     cout<<"Salaried employee. Regular Pay:"<<salary<<endl;
      cout<<"___________________________________\n";
}


int main()
{
     Administrator a1;
     a1.setData(100,"Carlos","111111","Senior Accountant","Accounting","Cesar");
     //a1.print();
     a1.printcheck();
return 0;
}