#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

void fillArray(char a[],int& numUsed, int size);
//pre-condition: Receives an empty array 
//post-condition: fills the array and returns the amount of array that is being used

void deleteRepeats(char a[], int& numUsed);
//pre-condition: accepts a partially filled array to locate repeated characters
//post-condition: returns a match if any of the characters in the array is repeated;



int main()
{
    int used;
    const int size=10;
    char arr[size];
    cout<<"Hello user. I will help you delete repeated chracters from an array"<<endl;

    fillArray(arr,used, size);

    cout<<"The initial size of the array is "<< used<<endl;
    cout<<"The values on the array are: "<<endl;

    for (int i = 0; i < used; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }

    deleteRepeats(arr, used);

    cout<<"After deletion the values on the array are: "<<endl;
    for (int i = 0; i < used; i++)
    {
        cout<<arr[i]<<" "<<endl; 
    }
    cout<<"And the size is now "<<used<<endl;

    return 0;
}

void fillArray(char a[], int& numUsed, int size)
{
    int i=0;
    cout<<"Please enter up to "<<size<<" characters of your preference. ";
    cout<<"End your list by typing '0'"<<endl;

    while (i<size)
    {   
        cin>>a[i];
        if (a[i]=='0')
            break;
        i++;
    }
    numUsed=i;
    
}

void deleteRepeats(char a[], int& numUsed )
{
    for (int n = 0; n < numUsed; n++)
    {
        int i=n+1;
        while(i<=numUsed)
        {
           if (a[n]==a[i])
           {
                for (int j=i; j < numUsed; j++)
                {
                    a[j]=a[j+1];
                }
                --numUsed;
           }
           else
            i++;
        }
    }   
}