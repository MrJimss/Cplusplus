#include <iostream>
using namespace std;

int Value(int x, int y)
{
     int z=x;
     x=y;
     y=z;
     return(x,y)
}

int main()
{
     int a=5;
     int b=6;
     cout << "before swapping a:"<< a<< endl<< "b:"<< b<< endl;
     Value (a,b);
     cout<< "After swapping a:"<< a<<endl<< "b:"<< b<< endl;


     return 0;
}