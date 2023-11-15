#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

string monthName(int n);
//Pre-condition: accepts the number of the month.
//post condition: prints the name of the month.

void formatTable(double rainActual[], double average, string city)
{
    string name;
    int len;
    cout<<endl;
    cout<<fixed<<setprecision(2);
    cout<< "Here is the table for the average rain in "<<city<<":"<<endl;
    
    cout<<"   Month  |        Rainfall        |"<<endl;
    for (int k = 36; k>0; k--)
    {
        cout<<"-";
    }
    cout<<endl;
    
    for (int i=1; i <= 12; i++)
    {
        name=monthName(i);
        len=name.length();
        cout<<name;
        for (int j = 10; j>len; j--)
        {
            cout<<" ";
        }
        cout<<"|";
        cout<< rainActual[i-1]<<"ml";
        if (rainActual[i-1]>average)
        {
            cout<<" Above by "<<rainActual[i-1]-average<<"ml |";
        }
        else
        {
            cout<<"  Off by  "<<fabs(rainActual[i-1]-average)<<"ml |";
        }
        cout<<endl;
    }
    cout<<endl;
    
}
//prints the format for the table.

void asterisks(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}

void showGraph(double rainActual[], double rainAverage[], string city)
{
    string name;
    int len;
    cout<<fixed<<setprecision(2);
    cout<< "Here is the graph for the average rain in "<<city<<":"<<endl;
    cout<<endl;
    
    cout<<"   Month  |     Graph (*=10ml)     |"<<endl;
    for (int k = 35; k>0; k--)
    {
        cout<<"-";
    }
    cout<<endl;
    
    for (int i=1; i <= 12; i++)
    {
        name=monthName(i);
        len=name.length();
        cout<<name;
        for (int j = 10; j>len; j--)
        {
            cout<<" ";
        }
        cout<<"|";
        int scale1 =ceil(rainActual[i-1]/10.0);
        cout<<" Previous Rainfall:";
        asterisks(scale1);
        for (int j = 10; j>0; j--)
        {
            cout<<" ";
        }
        cout<<"|";
        int scale2= ceil(rainAverage[i-1]/10.0);
        cout<<" Average Rainfall:";
        asterisks(scale2);
        cout<<endl;
    }
    cout<<endl;

}

int main()
{
    string city,name;
    char answer;
    int n=0,size=12,show,month;
    double rainAvg[12];
    double rainAct[12];
    double sumAvg=0.0;
    cout<<fixed<<setprecision(2);

    cout<<"Hello, user. Welcome to the monthly rainfall calculator."<<endl;
    cout<<" Please start by entering the name of your city: ";
    getline(cin,city);
    cout<<"Please, now enter the average rainfall in ml for each of the months. " <<endl;
    
    for (int i = 1; n<size; i++)
    {
        name=monthName(i);
        cout<<name<<": ";
        cin>>rainAvg[n];
        sumAvg+=rainAvg[n];
        n++;
    }
    cout<<"Thank you. Now please tell me in which month you are in (MM): ";
    cin>> month;
    if (month<1 || month >12)
    {
        monthName(0);
    }
    cout<<"Please, now enter the actual rainfall in ml for each of previous 12 months. " <<endl;

    int i=month-1;
    int n2=month-2;
    while(i>0)
    {
        name=monthName(i);
        cout<<name<<": ";
        cin>>rainAct[n2]; 
        i--;
        n2--;
    }
    int n3=11;
    while(size>=month)
    {
        name=monthName(size);
        cout<<name<<": ";
        cin>>rainAct[n3]; 
        size--;
        n3--;
    }

    double average=((sumAvg)/12);
    cout<<endl;
    cout<<"Thank you!"<<endl;

    do
    {
        cout<<"Press 1 to see the table.\n"
        <<"Press 2 to see the graph.\n"
        <<"Press any key to exit."<<endl;
        cin>>show;
        switch (show)
        {
            case 1:
                formatTable(rainAct, average, city);
                break;
            
            case 2:
                showGraph(rainAct,rainAvg,city);
                break;
            default:
                answer='n';
                break;
        }
        cout<<"Try again? (y/n)"<<endl;
        cin>>answer;
    } while (answer=='y'|| answer=='Y');
    
    cout<<"Thank you. Goodbye!";
    return 0;
}

string monthName(int n)
{
    switch (n)
    {
    case 1:
        return "January" ;
        break;
    case 2:
        return "February" ;
        break;
    case 3:
        return "March" ;
        break;
    case 4:
        return "April";
        break;
    case 5:
        return "May";
        break;
    case 6:
        return"June";
        break;
    case 7:
        return "July";
        break;
    case 8:
        return "August"; ;
        break;
    case 9:
        return "September";
        break;
    case 10:
        return "October";
        break;
    case 11:
        return "November";
        break;
    case 12:
        return "December";
        break;
    default:
        cout<<"Incorrect input. Please restart."<<endl;
        exit(1);
        break;
    }
}