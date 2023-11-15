#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

class point
{
private:
     double x,y;
public:
     //default constructor
     point(){x=0.0;y=0.0;};

     //member function to set values to a point
     void set(double a, double b)
     {
          x=a;
          y=b;
     }

     //member function to add x and y values to a point
     void move(double v, double h)
     {
          x+=h;
          y+=v;
     }

     //member function to rotate points clockwise around the origin
     void rotate()
     {
          if((x>=0 && y>=0)||(x<=0 && y<=0))
          {
               y*=-1;
          }
          if((x>=0 && y<=0)||(x<=0 && y>=0))
          {
               x*=-1; 
          }
          
     }

     //accessor methods to return the current state of the coordinates of a point
     double getX()const{return x;}
     double getY()const{return y;}
};



int main()
{    
     //variables to create and modify the coordinates of the points
     double a, b, v, h,newA,newB;

     //variables based on user interaction
     int size, choice;

     //main program using loops to fill and display the array
     cout<<"Hello user welcome, how many points would you like to create?"<<endl;
     cin>> size;
     //array of objects of type point
     point p[size];
     cout<<"Now please enter:"<<endl;
     for (int i = 1; i <=size; i++)
     {
          cout<<"x"<<i<<": ";
          cin>>a;
          cout<<"y"<<i<<": ";
          cin>>b;
          cout<<endl;
          p[i-1].set(a, b);
     }
     cout<<"The points entered are the following: "<<endl;
     for (int i = 1; i <= size; i++)
     {
          cout<<"Point "<<i<<": "<<endl;
          cout<<"\tx="<<p[i-1].getX()<<endl;
          cout<<"\ty="<<p[i-1].getY()<<endl;
     }
     cout<<endl;
     cout<<"------------------"<<endl;
     cout<<endl;
     //while loop for the user to select options to manipulate points
     do
     {
     cout<<"Would you like to..."<<endl;
     cout<<"1- Rotate point."<<endl;
     cout<<"2- Move point."<<endl;
     cout<<"3- Change coordinates"<<endl;
     cout<<"4- Display current coordinates."<<endl;
     cout<<"5- Exit Program."<<endl;
     cout<<"Press the number to chose your answer."<<endl;
     cin>> choice;
     int n=0;
     switch (choice)
     {
     case 1:
          cout<<"Which point would you like to rotate clockwise 90 degrees?"<<endl;
          cin>>n;
          p[n-1].rotate();
          cout<<"......";
          cout<<"Done! Please check the new coordinates using option 4.";
          cout<<endl;
          cout<<"------------------"<<endl;
          break;
     case 2:
          cout<<"Which point would you like to move?"<<endl;
          cin>>n;
          cout<<"Enter the amount of vertical spaces to move: ";
          cin>>v;
          cout<<"Enter the amount of horizontal spaces to move: ";
          cin>>h;
          p[n-1].move(v,h);
          cout<<"......";
          cout<<"Done! Please check the new coordinates using option 4.";
          cout<<endl;
          cout<<"------------------"<<endl;
          break;
     case 3:
          cout<<"Which point would you like to change?"<<endl;
          cin>>n;
          cout<<"Enter the new coordinates separated by space";
          cin>>newA;
          cin>>newB;
          p[n-1].set(newA,newB);
          cout<<"......";
          cout<<"Done! Please check the new coordinates using option 4.";
          cout<<endl;
          cout<<"------------------"<<endl;
          break;
     case 4: 
          cout<<"Which point would you like to display?";
          cin>> n;
          cout<<"Point "<<n<<" has the following coordinates: "<<endl;
          cout<<"\tx="<<p[n-1].getX()<<endl;
          cout<<"\ty="<<p[n-1].getY()<<endl;
          cout<<endl;
          cout<<"------------------"<<endl;
          break;
     case 5: 
          break;
     default:
          cout<<"Incorrect input.Try again!"<<endl;
          break;
     }
     }while(choice!=5);

     cout<<"Thank you for using our program";
    
     
     
return 0;
}