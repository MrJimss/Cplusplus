#include <iostream>
#include "f.h"
#include "g.h"


int main()
{
     using std:: cout;
     using std:: endl;

     cout<<"Wwelcome to the program. I will add and subtract two numbers"<<endl;
     using A::Func;
          Func f1(4,5);
     f1.AddNumbers();

     using A::Gunc;
          Gunc g1(6,-7);
     g1.substractNumbers();

     cout<<"thank you!"<<endl;

return 0;
}