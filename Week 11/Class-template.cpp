#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

template <class T>

class Max
{
     T num1, num2;
public:

     Max(T n1, T n2)
     {
          num1=n1;
          num2=n2;
     };
     void swap();
     T getMax();
     void result();
};
template <class T>
void Max<T>::swap()
{
     T temp;
     temp=num1;
     num1=num2;
     num2=temp;
     
}

template <class T>
T Max<T>::getMax()
{
     T maxVal;
     if (num1>num2)
     {
          return num1;
     }
     else
          return num2;
     
     
}

template <class T>
void Max<T>::result()
{
     cout<<"Numbers are: "<<num1<<" and "<<num2<<"."<<endl;
}


int main()
{
     Max <int> m(1,2);
     m.result();
     m.swap();
     cout<<"After swap: "<<endl;
     m.result();
     m.getMax();
     cout<<"The biggest value out of the two numbers is: "<<m.getMax()<<endl;

return 0;
}