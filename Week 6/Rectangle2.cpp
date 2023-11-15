#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

class Rectangle
{
private:
     double lenght, width;
     void real();
public:
     Rectangle(double len=1, double w=1) : lenght(len), width(w){real();};
     double perimeter(double lenght, double width){return (2*lenght)+(2*width);};
     double area(double lenght, double width){return (lenght*width);};
     void setData(double len, double w){lenght=len; width=w;};
     void showData()
     { 
          cout<<"The rectangle sides are "<<lenght<<" by "<< width<<" centimeters."<<endl;
          cout<<endl;
          cout<<"the area of the rectangle is "<<area(lenght, width)<<" centimeters^2."<<endl;
          cout<<endl;
          cout<< "the perimeter of the rectangle is "<< perimeter(lenght, width) <<endl;
          cout<<endl;
     }

};

void Rectangle::real()
{
     if (lenght<=0 || width<=0)
     {
          cout<<"Incorrect input. Please try again."<<endl;
          lenght=1;
          width=1;
     }  
}



int main()
{
     int lenght, width;
     cout<<"Hello user. Welcome, please input the width and the height for the fitst rectangle"<<endl;
     cin>>lenght>>width;
     cout<<endl;
     Rectangle r1(lenght, width), r2(3,4), r3;
     r3.setData(0,0);

     r1.showData();
     r2.showData();
     r3.showData();
return 0;
}