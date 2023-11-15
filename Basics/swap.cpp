#include <iostream>
#include <string>
using namespace std;

void insert(int& x,int& y);
void swap(int var1, int& var2);
void result(int& v1, int& v2);

int main()
{
    int a,b;
    insert(a,b);
    swap(a,b);
    result(a,b);
return 0;
}
void insert(int& x,int& y)
{
    cout<<"enter 2 values: ";
    cin>>x;
    cin>>y;
}
void swap(int var1, int& var2)
{
    int z;
    z=var1;
    var1=var2;
    var2=z;
}

void result(int& v1, int& v2)
{
    cout<<"the values are now: "<<v1<<"and"<<v2;
}
