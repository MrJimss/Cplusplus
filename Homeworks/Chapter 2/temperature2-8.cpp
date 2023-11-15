#include <iostream>
#include <string>
using namespace std;

int conversion(int celsius)
{
    int fahrenheit;
    const double n2=(9.0/5.0);
    double subfah=n2*celsius;
    fahrenheit=subfah+32;
    return fahrenheit;
};

int main()
{
 
 int cel=100;
 int fah;
 cout<<"The program will find the value that is  the same in both Fahrenheit and Celsius."<<endl;
 cout<<"According to my calcualtions that number is: "<<endl;
        do
        {
          fah=conversion(cel);
          cel--;  
        } while (cel!=fah);
        cout<<" The value where celsius and fahrenheit are the same is "<< cel<< " and "<< fah;

return 0;
}