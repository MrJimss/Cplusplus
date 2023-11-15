#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
using namespace std;

const int players=10;

void addPlayer(string a[], int b[], int& numUsed);
//pre-condition: Accepts the user input to create an array.
//Post-condition: Returns an array of names and scores. 

void displayPlayers(string a[], int b[], int numUsed);
//pre-condition: Uses the created array
//post-condition: displays the values in the array

void search(string a[], int b[], int numUsed);
// //searches for a match in the name and displays the player to the user.

void deletePlayer(string a[], int b[], int& numUsed);
//uses the function search to delete the player specified by the user.


int main()
{
    string names[players];
    char answer='y';
    int scores[players];
    int option, used=0;
    cout<<"Hello, user. Welcome. I will help you keep track of your 10 favorite players and their scores."<<endl;
    cout<<"Please, to start select an option from our menu"<<endl;

    do
    {
        cout<<"Press 1 to add player."<<endl;
        cout<<"Press 2 to see a list of your players."<<endl;
        cout<<"Press 3 to search for a specific player."<<endl;
        cout<<"Press 4 to remove a player."<<endl;

        cin>> option;

        switch (option)
        {
        case 1:
            addPlayer(names,scores, used);
            break;
        case 2:
            displayPlayers(names, scores, used);
            break;
        case 3:
            search(names,scores, used);
            break;
        case 4:
            deletePlayer(names, scores, used);
            break;
        default:
            cout<<"Please try again. Incorrect input.";
            exit(1);
            break;
        }
        cout<<"Would you like to see the menu again? (y/n)";
        cin>> answer;
    } while (answer=='y'|| answer=='Y');
    
   cout<<"Thank you.Please comeback anytime!";
    return 0;
}

void addPlayer(string a[], int b[], int& numUsed)
{
    char answer;
    int i=numUsed;
    do
    {
        cout<<"Please enter the name of the player followed by their score you wish to add."<<endl;
        cin>>a[i]>>b[i];
        cout<<"Add another one? (y/n)"<<endl;
        cin>>answer;
        if(answer=='y'|| answer=='Y')
            i++;
        if (answer=='n'|| answer=='N')
        {
            numUsed=i+1;
            break;
        }
    }while(answer=='y'|| answer=='Y');
   
}
void displayPlayers(string a[], int b[], int numUsed)
{
    cout<<setw(10)<<"Name"<<setw(10)<<"Score"<<endl;
    for (int i = 0; i <numUsed; i++)
    {
        cout<<setw(10)<<a[i]<<" "<<setw(5)<<b[i]<<endl;
    }
}

void search (string a[], int b[], int numUsed)
{
    string name;
    int count=numUsed;
    cout<<"Enter the name of the player:";
    cin>>name;
    for (int i = 0; i < numUsed; i++)
    {   
        if (name==a[i])
        {
            cout<<"Player: "<<a[i]<<endl;
            cout<< "Score: "<<b[i]<<endl;
            break;
        }
        else
            count--;
    }
    if (count==0)
    {
        cout<<"no matches found!"<<endl;
    }
}

void deletePlayer(string a[], int b[], int& numUsed)
{
    string name;
    int count=numUsed;
    cout<<"Enter the name of the player:";
    cin>>name;
    for (int i = 0; i < numUsed; i++)
    {   
        if (name==a[i])
        {
                for (int j=i; j < numUsed; j++)
                {
                    a[j]=a[j+1];
                    b[j]=b[j+1];
                }
                numUsed--;
            cout<<"Deleting...!"<<endl;
            break;
        }
        else
            count--;
    }
    if (count==0)
    {
        cout<<"no matches found!"<<endl;
    }
    cout<<"The new list of players is: "<<endl;
    displayPlayers(a,b,numUsed);
}