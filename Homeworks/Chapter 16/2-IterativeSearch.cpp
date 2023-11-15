#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;

const int ARRAY_SIZE = 10;

template<class T>
//iterative search
void search(const T a[], int low, int high, int key, bool& found, int& l)
{
     int first=low;   
     int last =high; 
     int mid;  
     found=false; //placeholder

     while ( (first <= last) && !found)  
     {    
          mid =(first + last)/2;

          if(key == a[mid])    
          {      
               found = true;      
               l = mid;    
          }    
          else if (a[mid] > key)      
               last = mid -1;    
          else if(key > a[mid])    
               first = mid + 1;   
     }
}

int main( )
{  
     int a[ARRAY_SIZE];  
     const int finalIndex = ARRAY_SIZE - 1;  
     int i;  
     //filling out the array
     for (i = 0; i < ARRAY_SIZE; i++)    
     {    
          a[i] = i*5;  
     };

     cout<<" the array contains:"<<endl; 
     for (i = 0; i < ARRAY_SIZE; i++)
     {
           cout << a[i] << " "; 
     }
     cout<<endl;


     int key, location;
     bool found;  
     cout << "Enter number to be located: ";  
     cin >> key;  
     search(a, 0, finalIndex, key, found, location);  
     if (found)    
          cout << key << " is in index location "<< location << endl;  
     else    
          cout << key << " is not in the array." << endl;
return 0;
}