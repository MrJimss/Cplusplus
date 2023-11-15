#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

class Shape //parent class
{
     protected: 
     int width; 
     int height;
     public:
     void setWidth(int w){width=w;}
     void setHeight(int h){height=h;}
     int getHeight(){return height;}
     int getWidth(){return width;}
};
class PaintCost
{
     public:
          int getCost(int area)
          {
               return area * 70;
          }
};

class Rectangle: public Shape, public PaintCost
{
     public:
          int getArea(){return width* height;}

};

int main()
{
     Rectangle r1;
     int area; //hold result
     
     r1.setWidth(5);
     r1.setHeight(6);

     area=r1.getArea();

     cout<<"The total cost to paint a room which size is "<<r1.getHeight()<<" feet by "<<r1.getWidth()<< " feet is "<<r1.getCost(area)<<" dollars";

system("pause");     
return 0;
}