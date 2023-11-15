//practice for structures passing by value

#include<iostream>
using namespace std;

struct Date
{
    int month;
    int day;
    int year;
};
//prototype
long int days(Date);

int main()
{
    Date current;
    //declaring the data members for the structure
    cout<<" Enter the current mont: ";
    cin>> current.month;
    cout<<"Enter the current day: ";
    cin>>current.day;
    cout<<"Enter the current year (e.g 1967): ";
    cin>> current.year;

    long int num=days(current);

    cout<<"The number of days is: "<<num;


    return 0;
}
//definitions

long int days(Date temp)
{
    return ((temp.day-1)+30*(temp.month-1)+360*(temp.year-1990));
}