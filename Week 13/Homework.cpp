//practice for structures and array

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

void fillArray(CarRec a[]);
double mpg(int m, int g);
void showData();

int main()
{
    CarRec cars[maxcars];

    //reports
    double mpg,average=0;

    //request data from user
    fillArray(cars);


    //end of loop to populate the structure
    cout<<"\n\n Number\tMPG\n";
    cout<<"______________________";
    for(int i=0;i<maxcars;i++)
    {
        mpg=cars[i].miles*cars[i].gallons;
        average+=mpg;
        cout<<setw(6)<<cars[i].num<<mpg<<endl;
    }
    average/=maxcars;
    cout<<"______________________\n";
    cout<<"Average MPG.      "<<average<<endl;


    return 0;
}
void fillArray(CarRec a[])
{
    for(int i=0;i<maxcars;i++)
    {
        cout<<"Enter the car number: ";
        cin>>a[i].num;
        cout<<"Enter the mileage: ";
        cin>>a[i].miles;
        cout<<"Enter the gallons: ";
        cin>>a[i].gallons;
    }
}
