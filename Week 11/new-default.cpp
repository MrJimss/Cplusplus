#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

template <typename T>

class Array
{
     T *ptr; //to store the address in the array
     int size;
     Array<T> *link;
public:
     Array(T arr[], int s, Array<T> a1);
     void print();
};

template <typename T>
Array <T> ::Array(T arr[], int s, Array<T> a1)
{
     ptr=new T[s];
     size=s;
     for ( int i=0; i<s;i++)
     {
          ptr[i]=arr[i];
     }
}
template <typename T>
void Array<T>::print()
{
     for (int i = 0; i < size; i++)
     {
          cout<< ptr[i]<<endl; //*(ptr +i)
     }
     
}

int main()
{
     char hello;
     cin.get(hello);
     Array<int> *ptr;
     int arr[]={1,2,3,4,5};
     Array <int> a(arr, 5, *ptr);
     a.print();
return 0;
}