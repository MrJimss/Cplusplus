//practice for structures using Pointers

#include<iostream>
#include <iomanip>
#include <string>
using namespace std;
const int numrecs=2;
struct PayRec
{
    int id;
    string name;
    double rate;
};




int main()
{
    //array of structures
    PayRec employee[numrecs]=
    {
        {32478,"Abrham",6.72},
        {3456,"john",10}
    };
    for(int i=0;i<numrecs;i++)
    {
        cout<<setw(7)<<employee[i].id<<setw(15)<<employee[i].name<<setw(6)<<employee[i].rate<<endl;
    }


    return 0;
}

