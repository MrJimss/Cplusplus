#include <algorithm>
#include <cstddef>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

const int maxnodes=3;

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

//populate will fill the list
void populate(Teletype *);
//check if the heap has space available
int check(Teletype *);
//function to remove and reroute pointers
void remove(Teletype *);

//function DEVELOPED BY MYSELF to insert a new node
void insert(Teletype *);



int main()
{
     string name, number;
     int answer;
     Teletype *list,*current; //list=head and current=tails
	Teletype *first; //created after adding the remove function
     //create the first nod
     list=new Teletype;
	if(!check(list))
	{
		cout<<"Insuficient storage available"<<endl;
	}
     current=list;

     for (int i = 0; i < maxnodes-1; i++)
     {
          populate(current);
          current -> nextaddr = new Teletype; //creates a new structure for the next node
		if(!check(current->nextaddr))
		{
			cout<<"Insuficient storage available"<<endl;
			exit(0);
		}
          current=current->nextaddr; //switches to a new node in the list
     }
     
     populate(current); //create the last node andlink it
     current-> nextaddr= NULL;//links the last node to NULL
	first=list; //stores the address of the list before removing first and starts moving

     //displays the values starting with initial node
	display(list);

	remove(first);//removes first which now is linked to address of the list
	display(list);
     
     //swtich to show menu
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
		if (findname(current,name)) 
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
		if (findnumber(current,number)) 
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

void populate(Teletype *record)
{
     cout<<"Enter a name: ";
     getline(cin,record->name);
     cout<<"Enter the telephone number: ";
     getline(cin,record->phoneno);
     return;
}

int check(Teletype *addr)
{
	if(addr == NULL)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}

void remove(Teletype *prevaddr)
{
	Teletype *temp;
	temp=prevaddr->nextaddr;
	prevaddr->nextaddr=temp->nextaddr;
	return;
	//if needed to remove a different one i.e null will be copied into the previous value by temp=null;
}

void insert(Teletype *addr)
{
	//done by me
	Teletype *temp;
	Teletype *newtemp =new Teletype;
	temp=addr->nextaddr;
	newtemp=temp->nextaddr;
	populate(newtemp);
	newtemp->nextaddr=temp;

	// done by the professor
	// Teletype *temp
	// temp=addr->nextaddr;
	// addr->nextaddr=new Teletype
	// populate(addr->nextaddr);
	// addr->nextaddr->nextaddr=temp 
	return;
}