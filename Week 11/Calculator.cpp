#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

template <class T>

class Calculator
{
private:
     T num1,num2;
public:
     Calculator(T n1, T n2)
     {
          num1=n1;
          if(n2>0)
               num2=n2;
          if (n2==0)
          {
               cout<<"Error. Your value has been converted to 1."<<endl;
               num2=1;
          }
     }
     void  displayresult()
     {
          cout<<"numbers are: "<<num1<<" and "<<num2<<"."<<endl;
          cout<<"Addition is: "<<add()<<endl;
          cout<<"Substraction is: "<<substract()<<endl;
          cout<<"Product is: " <<product()<<endl;
          cout<<"division is: "<<divide()<<endl;
     }
     T add()
     {
          return num1+num2;
     }
     T substract()
     {
          return num1-num2;
     }
     T product()
     {
          return num1*num2;
     }
     T divide()
     {
          return num1/num2;
     }

};

int main()
{
     Calculator <double> intcal('2','1');

     
     intcal.displayresult();
return 0;
}