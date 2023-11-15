#include  <iostream>
using namespace std;
int main()
{
 int count =1, sum=0, val;
 cout<< "Enter the number unitl which the has to be calculated: \n";
 cin >> val;
 while (count<=val)
     {
         sum+=count;
         count =count+1;
     }
     cout<< "Sum of 1 to "<< val << " = " << sum;
 return 0;
}