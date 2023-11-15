#include <iostream>
#include <string>
using namespace std;
int main()
{
int prime;
int n;
 cout<<"The program will calcualte the prime number between 3 and 100."<<endl;
 cout<<"According to my calcualtions the prime numbers are: "<<endl;

 for (int i=3; i<100; i++) 
    {
        prime=1;
        n=i-1;
        for (int j=2; j<n; j++)
        {
            if (i % j == 0) 
            {
                prime=0;
                break;    
            }
        } 
         if(prime) 
        {
        cout << i << " "<<endl;
         }       
    }
 
return 0;
}