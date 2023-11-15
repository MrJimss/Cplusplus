//practice for structures and array

#include <algorithm>
#include<iostream>
#include<iomanip>
using namespace std;
const int maxcars=2;

struct CarRec
{
    int num;
    int miles;
    int gallons;
};
void fill(CarRec * );
void show(CarRec *);


int main()
{
    CarRec cars[maxcars];
    CarRec *ptr;
    ptr=cars;
    

    //request data from user
    fill(ptr);

    //SHOWS DATA
    show(ptr);
    



    return 0;
}

void fill(CarRec *cars )
{
    for(int i=0;i<maxcars;i++)
    {
        cout<<"Enter the car number: ";
        cin>>cars[i].num;
        cout<<"Enter the mileage: ";
        cin>>cars[i].miles;
        cout<<"Enter the gallons: ";
        cin>> cars[i].gallons;
    }
};

void show(CarRec *cars)
{
    double mpg,average=0;
    for(int i=0;i<maxcars;i++)
    {
        mpg=cars[i].miles*cars[i].gallons;
        average+=mpg;
        cout<<"Car Number:"<<cars[i].num;
        cout<<setw(10)<<"MPG:"<<mpg<<endl;
    }
    average/=maxcars;
    cout<<"Average MPG: "<<average<<endl;
}