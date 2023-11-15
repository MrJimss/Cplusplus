#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <ctime>
using namespace std;

const int column=2;

void fillArray( int a[][column],int& numUsed, int elements);
//pre-condition: Receives an empty array 
//post-condition: fills the array and returns the amount of array that is being used

void deleteRepeats( int a[][column], int& numUsed);
// //pre-condition: accepts a partially filled array to locate repeated characters
// //post-condition: returns a match if any of the characters in the array is repeated;

void sort (int a[][column], int numUsed);
// //pre-condition: accepts an array with no repeted values.
// //post-conditin: returns the array sorted from largest to lowest.

void largest( int a[][column], int index, int numUsed);
// //finds out the largest value of the array[n][0]

void swapVal(int& a, int& a1, int& b, int& b1);
// //swaps the values of the two indexes



int main()
{
    srand(time(0));
    int elements=(rand()%50);
    int used;
    int arr[elements][column];

    cout<<"Hello user. I will help you create a list of number from largest to smallest and the count them. "<<endl;

    fillArray(arr,used, elements);

    deleteRepeats(arr, used);

    sort(arr,used);
    
    cout<<"N Count"<<endl;

     for (int i = 0; i < used; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout<<arr[i][j]<<" "; 
        }
        cout<<endl;
    }
    return 0;
}

void fillArray( int a[][column],int& numUsed, int elements)
{
    int i=0;
    cout<<"Please enter "<<elements<<" numbers of your preference. "<<endl;

    while (i<elements)
    {   
        cin>>a[i][0];
        i++;
    }
    numUsed=i;   
}

void deleteRepeats(int a[][column], int& numUsed)
{   
   
    for (int n = 0; n < numUsed; n++)
    {
        int i=n+1;
        int count=1;
        while(i<=numUsed)
        {
           if (a[n][0]==a[i][0])
           {
                for (int j=i; j < numUsed; j++)
                {
                    a[j][0]=a[j+1][0];
                }
                count++;
                --numUsed;
           }
           else
            i++;
        }
        a[n][1]=count;
    }   
}

void sort(int a[][column], int numUsed)
{   
    for (int index = 0; index < numUsed; index++)
    {
        largest(a,index,numUsed);
    }
 
}

void largest(int a[][column], int index, int numUsed)
{
    int large=a[index][0];
    int indexLarge= index;
    for (int i = index+1; i < numUsed; i++)
    {  
        if (a[i][0]>large)
        {
            large=a[i][0];
            indexLarge=i;
        }
    }
    swapVal(a[index][0],a[index][1],a[indexLarge][0], a[indexLarge][1]);
}

void swapVal(int& a, int&a1,int& b, int& b1)
{
    int temp, temp2;
    temp=a;
    a=b;
    b=temp;

    temp2=a1;
    a1=b1;
    b1=temp2;
}
