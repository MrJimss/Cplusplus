#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

const int space=6;
void fillArray( int a[],int b[]);
//pre-condition: Receives an empty array 
//post-condition: fills the array and returns the amount of array that is being used


int main()
{
    int grades[space];  
    int count[space]={0,0,0,0,0,0};
    cout<<"Hello, user. I will help you count the the grades you enter"<<endl;

    fillArray(grades,count);
    
    for (int k = 0; k<=5; k++)
    {
        cout<<count[k]<<" grades of "<<k<<endl;
    }
    
return 0;
}

void fillArray( int a[],int b[])
{
 
    cout<<"Please enter the grades of your students in the scale from 0 to 5. "<<endl;
    cout<<"To end input enter any number larger than 5"<<endl;
    int i=0;
    int n=1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]==0)
            b[0]++;
        if(a[i]==1)
            b[1]++;
        if(a[i]==2)
            b[2]++;
        if(a[i]==3)
            b[3]++;
        if(a[i]==4)
            b[4]++;
        if(a[i]==5)
            b[5]++;
        if(a[i]>5)
            break;
        n++;
    }
}