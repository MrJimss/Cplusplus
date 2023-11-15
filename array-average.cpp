#include <iostream>
using namespace std;

double calavg(double testvals[], int size);

int main()
{
    double testvals[]={95,7283,99,54,86,75,92,73,79,75,82,73};
    int size=sizeof(testvals)/sizeof(double);
    double totalavg= calavg(testvals, size);

    //outputing the value of the function to the user 
    cout<<"Thank you user. The average value of the array is "<<totalavg<<endl; 

    return 0;
}

double calavg(double testvals[], int size)
{
    double sum=0; //acuumulator variables need an initial value to add more. 
    double avg;

    for( int i = 0; i < size; i++)
    {
        sum=sum+testvals[i];
    }
    avg= sum/size;
    return avg;
}