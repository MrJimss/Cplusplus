#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

struct Teletype
{
     string name;
     string phoneno;    
     Teletype *nextaddr;
};
//FUNCTION PROTOTYPES
void display(Teletype *);

//this function will find a match and return 0 or 1 depending on the return
int findname(Teletype *, string );
int findnumber(Teletype *, string);



int main()
{
	string name,number;
	int answer;
     Teletype t1={"Peter Smith","(347)660-5678"};
     Teletype t2={"Maria", "(787)883-3435"};
     Teletype t3={"Juan pedro", "(212)686-9279"};
     Teletype *first,*start;

     //to assign to a pointer we use the & and strucuture name
     first=&t1; //this is the head 
     start=&t1; //this is the tail allowsw to move through the node
     t1.nextaddr=&t2;
     t2.nextaddr=&t3;

     //THIS IS THE WAY TO END A SHORT LINKED LISTS 
     t3.nextaddr=NULL;

	display(first);
	cout<<"Would you like to:" <<endl;
	cout<<"1- Search for a name" <<endl;
	cout<<"2- Search for a number" <<endl;
	cout<<"3- Exit program"<<endl;
	cin>>answer;
	switch (answer) 
	{
	case 1:
		cout<<"Enter the name to find: ";
		getline(cin>> ws,name);
		cout<<endl;
		if (findname(start,name)) 
		{
			cout<<"The term: "<<name<<" is present in the list";
		}
		else 
		{
			cout<<"The term: "<<name<<" is not present in the list";
		}
		break;
	case 2:
		cout<<"Enter the phone number to find" <<endl;
		cin.ignore();
		getline(cin,number);
		if (findnumber(start,number)) 
		{
			cout<<"The term: "<<number<<" is present in the list";
		}
		else 
		{
			cout<<"The term: "<<number<<" is not present in the list";
		}
		break;
	case 3:
		cout<<"Thank you for using our program!" <<endl;
		exit(1);
	}
return 0;
}

void display(Teletype *contents)
{
	while (contents!=NULL) 
	{
		cout<<setw(20)<<contents->name<<setw(20)<<contents->phoneno<<endl;
		contents=contents->nextaddr;
	}
	cout<<endl;
}

int findname(Teletype *contents, string name)
{
	int found = 0;
	while (contents!=NULL) 
	{
	if(name==contents->name)
	{
		found= 1;
		break;
	}
	else
	{
		contents=contents->nextaddr;
	}
	}
	return found;
}
int findnumber(Teletype *contents, string number)
{
	int found =0;
	while (contents!=NULL) 
	{
		if(number==contents->phoneno)
		{
			found= 1;
			break;
		}
		else
		{
			contents=contents->nextaddr;
		}
	}
	return found;
}