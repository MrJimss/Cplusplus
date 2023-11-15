#include <iostream>
using namespace std;

int main() 
{
  for (int n1 = 3; n1 <= 100; n1++) 
  {
    int prime = 1;

    for (int n2=2; n2 < n1; n2++) 
    {
      if (n1 % n2 == 0) 
      {
        prime = 0;
        break;
      }
    }
    if (prime == 1) 
    {
         cout<< n1<< endl;
    }
  }
  return 0;
}