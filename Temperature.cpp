#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

class Temperature
{
private:
     //stores the temperature in kelvin 
     double kelvin;
public:
     //default constructor
     Temperature(){kelvin=0.0;};
     
     //setters
     void setTempKelvin(double k)
     {
          kelvin=k;
     }
     void setTempCelsius(double c)
     {
          double k=c+273.15;
          kelvin=k;
     }
     void setTempFahrenheit(double f)
     {
          double c=(5.0/9.0)*(f-32);
          double k=c+273.15;
          kelvin=k;
     };

     //getters
     double getCelisus()
     {
          return kelvin-273.15;
     }
     double getkelvin()
     {
          return kelvin;
     }
     double getFahrenheit()
     {
          return ((9.0/5.0)*(kelvin-273.15)+32);
     }
};


int main()
{
     Temperature k1;

     int choice,choice2;

     double c,k,f;

     cout<<"Hello user. How woudld you like to add the temperature: "<<endl;
     cout<<"1-Celisus."<<endl;
     cout<<"2-Fahrenheit."<<endl;
     cout<<"3-Kelvin."<<endl;
     cin>> choice;
     cout<<"Please add the temperature."<<endl;
     switch (choice)
     {
     case 1 :
          cin>>c;
          k1.setTempCelsius(c);
          break;
     case 2 :
          cin>>f;
          k1.setTempFahrenheit(f);
          break;
     case 3 :
          cin>>k;
          k1.setTempKelvin(k);
          break;
     default:
          break;
     }
     
     cout<<"How would you like to get your temperature?"<<endl;
     cout<<"1-Celisus."<<endl;
     cout<<"2-Fahrenheit."<<endl;
     cout<<"3-Kelvin."<<endl;
     cin>> choice2;
     switch (choice2)
     {
     case 1 :
          cout<<"The temperature in celsius is "<<k1.getCelisus()<<" celsius";
          break;
     case 2 :
         cout<<"The temperature in fahrenheit is "<<k1.getFahrenheit()<<" fahrenheit";
          break;
     case 3 :
          cout<<"The temperature in kelvin is "<<k1.getkelvin()<<" Kelvin";
          break;
     default:
          break;
     }

return 0;
}