#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;

const int ARRAY_SIZE = 10;

template<class T>
void bsearch(const T a[], int first, int last, T key, bool& found, int& location)
{  
     if (first > last)  
     {    
          found = false;  
     }  
     else  
     {    
          int mid = (first + last)/2;
          if (key == a[mid])   
          {      
               found = true;      
               location = mid;    
          }    
          else 
          if (a[mid] > key)  
          {      
               bsearch(a, first, mid - 1, key, found, location);    
          }    
          else if (key > a[mid])   
          {      
               bsearch(a, mid + 1, last, key, found, location);    
          }  
     }
}

int main( )
{  
     double a[ARRAY_SIZE];  
     const int finalIndex = ARRAY_SIZE - 1;  
     int i;  

     for (i = 0; i < ARRAY_SIZE; i++)    
     {    
          a[i] = i*7.3;  
     };
     cout<<"Array values are:"<<endl; 
     
     for (i = 0; i < ARRAY_SIZE; i++)
     {
          cout << a[i] << " "; 
     } 
     cout<<endl;


     double key; 
     int location;
     bool found;  

     cout << "Enter number to be located: ";  
     cin >> key;  

     bsearch(a, 0, finalIndex, key, found, location); 
     if (found)    
          cout<<key<< " is in index location "<< location << endl; 
     else 
          cout<<key<< " is not in the array." << endl;
return 0;
}