#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

class Employee
{
private:
    int idNum;
    double payRate;
    double maxHours;
public:
    Employee(int id=0, double pay=0, double hours=0){idNum=id; payRate=pay;maxHours=hours;}
    void setData(int , double , double );
    void showData();
    void deleteEmployee();
    int getId(){return idNum;}
};

//function definitions
void Employee::setData(int id, double pay, double hours)
{
    idNum=id;
    payRate=pay;
    maxHours=hours;
}

void Employee::deleteEmployee()
{
    idNum=0;
    payRate=0;
    maxHours=0;
}

void Employee::showData()
{
    cout<<"The employee #"<<idNum<<endl;
    cout<<"Has a pay rate of " <<payRate<<" dollars"<<endl;
    cout<<"And works a maximum of "<<maxHours<<" per week"<<endl;

}



int main()
{
int id; //id number
double pay;
double hours;
int choice; //for the menu  
int count=0; // counter variable
int index;
int i;


Employee employee[100];

do
{
    cout<<"Hello, user. Please select an option from our menu"<<endl;
    cout<<"1- Add an employee."<<endl;
    cout<<"2- Modify employee data."<<endl;
    cout<<"3- Delete an employee."<<endl;
    cout<<"4- Exit this menu."<<endl;
    cin>> choice;

    switch (choice)
    {
    case 1:
            cout<<"Enter the ID number for the employee:";
            cin>>id;
            cout<<"Enter the pay rate for the employee: ";
            cin>>pay;
            cout<<"Enter the max Hours this emlployee will work per week: ";
            cin>>hours;
            employee[count].setData(id, pay, hours);
            count++;
        break;
    case 2:
        if (count==0)
        {
            cout<<"No employees in database. Please add an employee first"<<endl;
            break;
        }
        cout<<"Enter the ID number to search for the employee:";
        cin>>id;
        for (i = 0; i < count; i++)
        {
            if (employee[i].getId()==id)
            {
                index=i;
                break;
            }
            else
            {
                index=-1;
            }
            
        }
        if (index==-1)
        {
            cout<<"Employee does not exist in our database"<<endl;
            break;
        }
        else
        {
            cout<<"Enter a new ID number for the employee:";
            cin>>id;
            cout<<"Enter the new pay rate for the employee: ";
            cin>>pay;
            cout<<"Enter the new max Hours this emlployee will work per week: ";
            cin>>hours;
            employee[index].setData(id, pay, hours);
            break;
        }
    case 3:
        if (count==0)
        {
            cout<<"No employees in database. Please add an employee first"<<endl;
            break;
        }
        cout<<"Enter the ID number to delete the employee:";
        cin>>id;
        for (i = 0; i < count; i++)
        {
           if (employee[i].getId()==id)
            {
                index=i;
                break;
            }
            else
            {
                index=-1;
            }
        }
        if (index==-1)
        {
            cout<<"Employee does not exist in our database"<<endl;
            break;
        }
        else
        {
            employee[index].deleteEmployee();
            cout<<"The employee #"<<id<< " has been deleted from our database"<<endl;
            break;
        }
    }
} while (choice!=4);

cout<<"the employees in our data base are the following: "<<endl;

for (int i = 0; i < count; i++)
{
    if (employee[i].getId()!=0)
    {
      employee[i].showData();
    cout<<endl;
    }
}


cout<<"Thank you for using our program!"<<endl;

return 0;
}