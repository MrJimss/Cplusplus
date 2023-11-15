/* 

AUTHOR: CARLOS BARROS BUSTAMANTE
Purpose: Create a program that returns the smalles of four integers

Date: 09/13/22

*/

#include <iostream>
using namespace std;

//function prototype can be used in conjunction with function definition
int min (int , int , int , int );


int main()

{
    int a,b,c,d;
    
    cout << "Hello user please enter your favorite 4 numbers"<<endl;
    cout<< "The system will return the smallest of the 4 values"<<endl;

    //accepts input from the user
    cin>>a>>b>>c>>d;

    int formula = min(a,b,c,d);

    //prints out the result from the function to the user
    cout<<"The smallest value of all is "<< formula <<endl;

    return 0;
}

int min (int e, int f, int g, int h)
{
    //compares the first value (e) to the others (f,g,h)
    if (e < f)
    {
        if(e < g)
        {
            if(e < h)
            {
               return e; 
            }
        }
    }

    //compares values from f to the other 2 integers
    if (f<g)
    {
        if (f<h)
        {
            return f;
        }
    }

    //compares values from g to the other integer
    if (g<h)
    {
        return g;
    }

    //returns the last integer if any of the others are not true
    else
    {
     return h;
    }
 
}