/* 
    AUTHOR: CARLOS BARROS BUSTAMANTE   
    Purpose: Create a program that displays an array through a function call
    Date: 09/13/22
*/


#include <iostream>
using namespace std;

void show(double temps[], int size);


int main() 
{
    double temps[]={6.5,7.2,7.5,8.3,8.6,9.4,9.6,9.8,10};
    int size=sizeof(temps)/sizeof(double);
    cout<<"Hello user, the values of the array are: "<<endl;
    show(temps,size);
    return 0;
}

void show (double temps[], int size)
{
     for (int i=0; i<size; i++)
    {
          cout << temps[i]<<" ";
    }
}