#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double average(int w, int x, int y, int z)
{
    
    double average,subAverage=(w+x+y+z);
    average=subAverage/4;
    return average;
}

    
double stdDev(int w, int x, int y, int z, double avg)
{
    int arr[]={w,x,y,z};
    double difference,sumdiff=0,power,sd,var;
    double sum=0;
        //calculations for the standard deviation sqrt(((si-avg)^2)/N-1) where si represents each sample
    for (int i = 0; i <4; i++)
    {
        difference=(arr[i]-avg);
        power=pow(difference,2);
        sumdiff+=power;
    }
    var=sumdiff/3; //N-1
    sd=sqrt(var);
    return sd;
}


int main()
{
    int a,b,c,d;
    double avg, sd;
    char answer;
    cout<<"Hello, user. Welcome. I will help you calculate the standard deviation of four values using their average."<<endl;

    cout<<endl;
    do
    {
        double compute(int a, int b, int c,int d,double avg,double sd);
            {
                cout<<"To start simply enter your four preferred values:";
                cin>>a>>b>>c>>d;

                avg=average(a,b,c,d);

                cout<<"the average is: "<<avg<<endl;

                sd=stdDev(a,b,c,d,avg);

                cout<<"The standard deviation of the four values is: "<<sd<<endl;

                cout<<endl;

                cout<<"Would you like to try again? (y/n)"<<endl;
                cin>>answer;
            }



    } while (answer=='y'|| answer=='Y');
    
   
    cout<<"Thank you! Goodbye.";


return 0;
}

