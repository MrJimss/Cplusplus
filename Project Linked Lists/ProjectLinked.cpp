#include <cstddef>
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

const int maxnodes=10;
int i=1;
int counter=0;
struct Teletype
{
     string phone;
     string name;
     Teletype *next;

};

//function prototypes
void populate (Teletype *);
int check (Teletype *);
void display(Teletype *);
void insert(Teletype *);
void modify(Teletype *);
void remove (Teletype *);

int main()
{
     
     Teletype *list, *start,*move, *first, *after;
     list= new Teletype;
     start=list;
     first=start;
     int ans,location, location2, location3;
     cout<<"Hello, user. Welcome to the record registry!"<<endl;
     while (1)
	{
		cout << "Select one of the following options from the menu: " << endl;
          cout << "1. Create a linked list" << endl;
		cout << "2. Insert new structure in the linked list" << endl;
		cout << "3. Modify an existing structure in the linked list" << endl;
		cout << "4. Delete an existing structure from the list" << endl;
		cout << "5. Find an existing structure from the list" << endl;
		cout << "6. Exit from the program" << endl;
          cin>>ans;
     switch (ans) 
     {
          case 1:
               populate(start);
               display(list);
               break;
          case 2:
               cout<<"After which location would you like to insert a node?1-4 : ";
               cin>>location;
               if (location==1) 
               {
                    insert(start);
               }
               else 
               {
                    for (; location>1; location--) 
                    {
                         first=first->next;
                         move=first;
                    }
                    insert(move); 
               } 
               display(start);
               break;
          case 3:
               first=start;
               cout<<"Which location would you like to modify?"<<endl;
               cin>>location2;
               if (location2==1) 
               {
                    modify(start);
               }
               else
               {
               for (; location2>1; location2--) 
               {
                    first=first->next;
                    move=first;
               }
               modify(move); 
               }
               display(start);
               break;
          case 4:
               cout<<"Which location would you like to remove?: ";
               cin>>location3;
               if (location3==1)
               {
                    Teletype *temp= start->next;
                    start=start->next;
                    start->next=temp->next;
                    delete temp;
               }
               if (location3==2) 
               {
                    remove(start);
               }
               else 
               {
                    first=start;
                    for (; location3>=3; location3--) 
                    {
                         first=first->next;
                         move=first;
                    }
                    remove(move); 
               } 
               display(start);
               break;
          case 5:
               break;
          case 6:
               cout<<"Exiting program... Done! " <<endl;
               exit(1);
               break;
          default:
               cout<<"Wrong choice. Please try again" <<endl;
               break;
     }
	}
 
return 0;
}

void populate(Teletype *rec)
{
     char answer;
     while (i<=maxnodes) 
     {
          cout<<"Enter a name: ";
          getline(cin>>ws,rec->name);
          cout<<"Enter the telephone number: ";
          getline(cin,rec->phone);
          rec->next = new Teletype; //creates a new structure for the next node
          
		if(!check(rec->next))
		{
			cout<<"Insuficient storage available"<<endl;
			exit(0);
		}
          cout<<"Add another one?(y/n)"<<endl;
          cin>> answer;
          if (answer=='y'|| answer =='Y') 
          {
               rec=rec->next; //switches to a new node in the list
          }
          else
          {
               rec->next=NULL;
               break;
          }
     }
     return;
}

int check(Teletype *rec)
{
	if(rec == NULL || i==maxnodes)
	{
	     return 0;
	}
	else 
	{
		return 1;
	}
}
void display(Teletype *rec)
{
     
	while (rec!=NULL) 
	{    
		cout<<setw(20)<<rec->name<<setw(20)<<rec->phone<<endl;
		rec=rec->next;
          counter++;   
	}
     cout<<"There are "<<counter<< " records in the data file."<<endl;     cout <<endl;
     return;
}
void insert(Teletype *rec)
{
	Teletype *temp;
	temp=rec->next;
	rec->next=new Teletype;

     cout<<"Enter a name: ";
     getline(cin>>ws,rec->next->name);
     cout<<"Enter the telephone number: ";
     getline(cin,rec->next->phone);
	rec->next->next=temp;

     free(temp);
     return;
}
void modify(Teletype *rec)
{
     cout<<"Enter a name: ";
     getline(cin>>ws,rec->name);
     cout<<"Enter the telephone number: ";
     getline(cin,rec->phone);
}
void remove(Teletype *prevaddr)
{
	Teletype *temp;
	temp=prevaddr->next;
	prevaddr->next=temp->next;
     delete temp;
	return;
	//if needed to remove a different one i.e null will be copied into the previous value by temp=null;
}