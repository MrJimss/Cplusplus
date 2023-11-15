#include <iostream>
using namespace std;
char mystery (int num1, int num2);

int main ()
{
     int x=1;
     cout << x<<endl;
     {
          cout<<x<<endl;
          int x=2;
          cout << x<<endl;
          {
               cout <<x<<endl;
               int x=3;
               cout<<x<<endl;
          }
          cout <<x<<endl;
     }
     cout <<x<<endl;
     return 0;
}

char mystery (int num1, int num2)
{
     if (num1>=num2)
     {
          return 'w';
     }
     else{
          return 'h';
     }
}