#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;


void search(char a[],char b[], char c[], char d[], int r[]);
//receives input from the user to search for a seat


int main()
{
    char a[7]={'A','A','A','A','A','A','A'};
    char b[7]={'B','B','B','B','B','B','B'};
    char c[7]={'C','C','C','C','C','C','C'};
    char d[7]={'D','D','D','D','D','D','D'};
    int rows[7]={1,2,3,4,5,6,7};
    cout<<"Welcome, user. I will help you find and select the seats for your next flight."<<endl;

    search(a,b,c,d,rows);

    return 0;
}

void search(char a[],char b[],char c[],char d[], int r[])
{
    int rowN;
    char x='X';
    char seat,answer;
    do
    {
        for(int i=0 ;i<7;i++)
        {
            cout<<r[i]<<"  "<<a[i]<<b[i]<<" "<<c[i]<<d[i]<<endl;
        }
        cout<<endl;
        cout<<"Seats marked with X are not available"<<endl;

        cout<<"Please enter the seat number in the form 'ROW SEAT' I.E '1 A' to select the corresponding seat." <<endl;
        cin>>rowN;
        while (rowN>7 || rowN<=0)
        {
            cout<<"incorrect input. Please try again."<<endl;
            cin>>rowN;
        }
        rowN-=1;
        cin>>seat;
        switch (seat)
        {
        case 'a':case 'A':
            if (a[rowN]==x)
            {
                cout<<"Seat taken! Choose another one. "<<endl;
                break;
            }
                a[rowN]=x;
                break;
        case 'b':case 'B':
            if (b[rowN]==x)
            {
                cout<<"Seat taken! Choose another one. "<<endl;
                break;
            }
                b[rowN]=x;
                break;
        case 'c': case 'C':
            if (c[rowN]==x)
            {
                cout<<"Seat taken! Choose another one. "<<endl;
                break;
            }
                c[rowN]=x;
                break;
        case 'd':case 'D':
            if (d[rowN]==x)
            {
                cout<<"Seat taken! Choose another one. "<<endl;
                break;
            }
                d[rowN]=x;
                break;
        default:
            cout<<"Incorrect input.";
            answer='y';
            break;
        }
        cout<<"Would you like to start again? (y/n)"<<endl;
        cin>>answer;  
    }while (answer=='y'|| answer=='Y');

}