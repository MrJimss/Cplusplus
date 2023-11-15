// Created on Carlos’ iPad.

#include <iostream>
using namespace std;

int gcf(int a, int b);


int main()
{
    int a; 
    int b;

    cout<<"enter the value for a: ";
    cin>>a;
    cout<<"enter the value for b: ";
    cin>>b;
    cout<<b%a;
    cout<<"gcf= "<<gcf(a,b)<<endl;

    return 0;
}

 int gcf(int a, int b)
 {
    if(b==0)   
        return a;
    else
        return gcf(b, a%b);


 }