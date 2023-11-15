#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

const double PI=(2.0*asin(1.0));


class Circle
{
protected:
     double radius;
public:
     Circle(double r=1.0):radius(r){};
     double calcVal();
};

double Circle::calcVal()
{
     return(PI*radius*radius);
}
//declaration of the cylinder simple inheritance

class Cylinder: public Circle
{
protected:
     double length;
     
public:
     Cylinder(double r =1.0,double l= 1.0):Circle(r),length(l){};
     double calcVal();
};

double Cylinder:: calcVal()
{
     double volume =(length*Circle::calcVal());
     return volume;
}

class Sphere: public Circle 
{
     protected:
          double n1=4.0;
          double n2=3.0;
          double val =(n1/n2);
     public:
          Sphere(double r=1.0):Circle(r){};
          double calcVal();
};

double Sphere::calcVal()
{
     return (val*radius*Circle::calcVal());
}


int main()
{

     Circle c1,c2(2);
     Cylinder cl1(3,4);
     Sphere s1(6);
     cout<<"The area of the circle is: "<<c1.calcVal()<<endl;
     cout<<"The area of the circle is: "<<c2.calcVal()<<endl;
     cout<<"the volume of the cylinder is: "<<cl1.calcVal()<<endl;
     cout<<"the volume of the sphere is: "<<s1.calcVal()<<endl;


return 0;
}