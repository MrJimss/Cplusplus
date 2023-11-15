#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

class Complex
{
     friend double addreal(const Complex&, const Complex&);
     friend double addimaginary(const Complex&, const Complex& );
     friend double subReal(const Complex&, const Complex&);
     friend double subImaginary(const Complex&, const Complex& );
     friend double multiplication1(const Complex&, const Complex&);
     friend double multiplication2(const Complex&, const Complex&);
private:
     double real;
     double imaginary;
public:
     Complex(double r=0.0, double i=0.0): real(r), imaginary(i){};
     void showComplexValues();
     
};

void Complex::showComplexValues()
{
     char sign='+';
     if(imaginary<0)
          sign='-';
     cout<<real<<' '<<sign<<' '<<abs(imaginary)<<'i'<<endl;
}

double addreal(const Complex& a, const Complex& b)
{
     return (a.real + b.real);
}
double addimaginary(const Complex& i1, const Complex& i2)
{
     return (i1.imaginary+i2.imaginary);
}
double subReal(const Complex& a, const Complex& b)
{
     return (a.real - b.real);
}
double subImaginary(const Complex& i1, const Complex& i2)
{
     return (i1.imaginary-i2.imaginary);
}

double multiplication1(const Complex& a, const Complex& b)
{
     return (((a.real*b.real)-(a.imaginary*b.imaginary)));
};

double multiplication2(const Complex& a, const Complex& b)
{
     return (((a.real*b.imaginary)+(a.imaginary*b.real)));
};


int main()
{
     Complex a(3,2), b(2, 4);

     //variables will hold the result 
     //double re, im;
     double m1, m2;

     cout<<"the first complex number is: ";
     a.showComplexValues();
     cout<<"the second complex number is: ";
     b.showComplexValues();

     //re=addreal(a,b);
     //im=addimaginary(a,b);
     //re=subReal(a,b);
     //im=subImaginary(a,b);

     m1=multiplication1(a,b);
     m2=multiplication2(a,b);

     //Complex c(re, im);
     Complex result(m1,m2);

     cout<<"The operation of the of the two complex numbers is: ";
     result.showComplexValues();


return 0;
}