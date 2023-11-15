//this it=s the implementation file f.cpp

#include "f.h"
#include <iostream>
namespace A
{
     using std::cout;
     using std::endl;
    void Func::AddNumbers()
     {
          cout<<" Function add numbers: "<<endl;
          cout<<"the numbers are: "<<x<<" and "<<y<<endl;
          cout<<" Their sum is: "<<x+y<<endl;
     }
}