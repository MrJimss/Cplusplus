#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;



class odometer
{
private:
     double mpg;
public:
     double odo=0.0;
     odometer(){odo=0.0;mpg=0.0;};
     void resetOdo(){odo=0.0;}
     void setMpg(double mg ){mpg=mg;};
     void addMiles(double m){odo+=m;};
     double getGas()
     {
          return odo/mpg;
     }
};

int main()
{
     
     double ml, mpg,sumgas=0.0, summiles=0.0;
     int n=0;
     //variables based on user interaction
     int size, choice;

     //main program using loops to fill and display the array
     cout<<"Hello user welcome, how many trips would you like to create?"<<endl;
     cin>> size;
     //array of objects of type odometer
     odometer o[size];
     cout<<"Now please enter:"<<endl;
     for (int i = 1; i <=size; i++)
     {
          cout<<"Miles for trip "<<i<<": ";
          cin>>ml;
          o[i-1].addMiles(ml);
     }
     cout<<endl;
     cout<<"------------------"<<endl;
     cout<<endl;
     //while loop for the user to select options to manipulate trips
     do
     {
     cout<<"Would you like to..."<<endl;
     cout<<"1- Get total gas used."<<endl;
     cout<<"2- Add trip."<<endl;
     cout<<"3- Get trip information;"<<endl;
     cout<<"4- Get current odometer."<<endl;
     cout<<"5- Reset odometer."<<endl;
     cout<<"6- Exit Program."<<endl;
     cout<<"Press the number to chose your answer."<<endl;
     cin>> choice;
    
     switch (choice)
     {
     case 1:
          cout<<"Enter the fuel efficiency for the trips in miles per gallon: "<<endl;
          cin>> mpg;
          for (int i = 1; i <=size; i++)
          {
               o[i-1].setMpg(mpg);
          }
          for (int i = 1; i <=size; i++)
          {
               sumgas+=o[i-1].getGas();
          }
          cout<<"the total gas used was "<<sumgas<<" gallons of gas."<<endl;
          cout<<endl;
          cout<<"------------------"<<endl;
          break;
     case 2:
          cout<<"Please enter the miles used in the trip"<<endl;
          cout<<"Miles: ";
          cin>>ml;
          size+=1;
          o[size-1].addMiles(ml);
          cout<<"Done! Please check the new info.";
          cout<<endl;
          cout<<"------------------"<<endl;
          break;
     case 3: 
           cout<<"The trips entered are the following: "<<endl;
          for (int i = 1; i <= size; i++)
          {
          cout<<"Trip "<<i<<": "<<endl;
          cout<<"\tMiles="<<o[i-1].odo<<" miles"<<endl;
          }
          cout<<endl;
          cout<<"------------------"<<endl;
          break;
     case 4:

          for (int i = 1; i <=size; i++)
          {
               summiles+=o[i-1].odo;
          }
          cout<<"the current status of the odometer is "<<summiles<<" miles."<<endl;
          break;
     case 5:
          o[n].resetOdo();
          cout<<"......";
          cout<<"Done! Please check the new info.";
          cout<<endl;
          cout<<"------------------"<<endl;
          break;
     case 6:
          break;
     default:
          cout<<"Incorrect input.Try again!"<<endl;
          break;
     }
     }while(choice!=6);

     cout<<"Thank you for using our program";
return 0;
}