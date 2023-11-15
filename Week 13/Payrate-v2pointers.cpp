//practice for structures using Pointers

#include<iostream>
using namespace std;

struct Employee
{
    int idnum;
    double payrate;
    double hours;

};

//function prototype
double calcnet(Employee *);


int main()
{
    Employee emp={6782,8.93,40.5}; 
    double net;
    net=calcnet(&emp);

    cout<<"the net pay for the employee "<<emp.idnum<<"is: "<<net;


    return 0;
}

double calcnet(Employee *ptr)
{
    return (ptr->payrate * ptr->hours);
}