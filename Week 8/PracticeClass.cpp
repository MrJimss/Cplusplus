#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;


class One
{
protected:
     double a;
private:

public:
     One(double = 2.0);
     virtual double f1(double);
     double f2(double );
};
//function definitions
One::One(double val)
{
     a=val;
}
double One::f1(double num)
{
     return(num/2);
}
double One::f2(double num)
{
     return (pow(f1(num),2));
}

class Two:public One
{
     protected:
     double f1(double);
};

//fucntion definition
double Two::f1(double num)
{
     return (num/3);
}


int main()
{
     One o1;
     Two t1;

     cout<<"The computed value using a base class object call is: "<<o1.f2(12)<<endl;
     cout<<"The computed value using a base class object call is: "<<t1.f2(12)<<endl;


return 0;
}