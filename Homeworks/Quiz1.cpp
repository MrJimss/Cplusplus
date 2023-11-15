#include <iostream>
using namespace std;

void letter(double arr[],int size, double avg)
{
	cout<<endl;
	for (int j=0; j<size;j++)
	{
		if(arr[j]<avg)
			cout<<"*";	
		if(arr[j]>=90 && arr[j]<100 )
		{
			cout<< arr[j]<<" A"<<endl;
		}
		if(arr[j]>=80 && arr[j]<90 )
		{
			cout<< arr[j]<<" B"<<endl;
		}
		if(arr[j]>=70 && arr[j]<80 )
		{
			cout<< arr[j]<<" C"<<endl;
		}
		if(arr[j]>=60 && arr[j]<70 )
		{
			cout<< arr[j]<<" D"<<endl;
		}
		if(arr[j]<=60 )
		{
			cout<< arr[j]<<" F"<<endl;
		}
	}
};
void fillArray(double a[], int size)
{
	double sum=0;
	double average;

	for (int i=0;i<=size ; i++ )
	{
			cout<<"enter a grade: ";
			cin>>a[i];
				if (a[i]>0)
				{
					sum+=a[i];
					size++;
				}
			
				if (a[i]<0)
				{
					cout<<"the sum is: "<<sum<<endl;
					average=sum/i;
					cout<<"The average is: "<<average<<endl;
					i=size;
					letter(a,size, average);
					
				}
	};
};


int main()
{
	int size=0;
	double grade[size];
	
	fillArray(grade, size);
	

	cout << "Thank you"<<endl;
	
	return 0;
}

