#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

template<class T>
T absvalue(T value1, T value2)
{
     T value3=value1+value2;
     T absolute=abs(value3);
     return absolute;
}

int main()
{
     int i1, i2;
     cout<<"Hello! Welcome to the program!"<<endl;
     cout<<"I will help you calculate the absolute value between two integers.\n";
     cout<<"Please enter your two favorite numbers"<<endl;
     cin>>i1;
     cin>>i2;
     int result=absvalue(i1, i2);
     cout<<"The absolute value of those two integers is: "<<result<<endl;
     cout<<endl;

     cout<<"Now with characters!"<<endl;
     char c1,c2;
     cout<<"Please enter your two favorite characters!"<<endl;
     cin>>c1;
     cin>>c2;
     char resultChar=absvalue(c1, c2);
     cout<<"the absolute value of those two characters is: "<<resultChar<<endl;

     cout<<"Thank you for playing"<<endl;


return 0;
}