#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;


class Food
{
private:
    string name;
    string type;
public:
    Food();
    void setData(string, string );
    void showData();
    void deleteFood();
    string getName(){return name;}
};

Food::Food()
{
    string name="food";
    string type="food";
}

void Food::setData(string nameP, string typeP)
{
    name=nameP;
    type=typeP;
}

void Food::showData()
{
    cout<<"The Food name is "<<name<<endl;
    cout<<"And is classified as " <<type<<endl;
}
void Food::deleteFood()
{
    name="e"; //empty
    type="e";
}


int main()
{
    string name; //food's name
    string type;
    char prep;
    int choice; //for the menu  
    int count=0; // counter variable
    int index;
    int i;

    Food food[100];


do
{
    cout<<"Hello, user. Please select an option from our menu"<<endl;
    cout<<"1- Add a food item."<<endl;
    cout<<"2- Modify a food item."<<endl;
    cout<<"3- Delete a food item."<<endl;
    cout<<"4- Exit this menu."<<endl;
    cin>> choice;

    switch (choice)
    {
    case 1:
            cout<<"Enter the name of the food:";
            cin>>name;
            cout<<"Is this food prepared dish? (y/n)";
            cin>>prep;
            if (prep=='y' || prep=='Y')
            {
                type="Prepared";
            }
            else
            {
                cout<<"What type of food is this? (Diary/Meat/Vegetable/Grain):";
                cin>>type;
            }
            
            food[count].setData(name,type);
            count++;
        break;
    case 2:
    if (count==0)
        {
            cout<<"No food in database. Please add a food first"<<endl;
            break;
        }
        cout<<"Enter the name to search for a food or dish:";
        cin>>name;
        for (i = 0; i < count; i++)
        {
            if (food[i].getName()==name)
            {
                index=i;
                break;
            }
            else
            {
                index=-1;
            }
        }
        if (index==-1)
        {
            cout<<"Food or dish does not exist in our database"<<endl;
            break;
        }
        else
        {
            cout<<"Enter a new food or dish name:";
            cin>>name;
            cout<<"is this food prepared? (y/n): ";
            cin>>prep;
            if (prep=='y' || prep=='Y')
            {
                type="Prepared";
            }
            else
            {
                cout<<"What type of food is this? (Diary/Meat/Vegetable/Grain):";
                cin>>type;
            }
            
            food[index].setData(name,type);
            break;
        }
    case 3:
        if (count==0)
        {
            cout<<"No food in database. Please add a food first"<<endl;
            break;
        }
         cout<<"Enter the name to delete the food:";
        cin>>name;
        for (i = 0; i < count; i++)
        {
            if (food[i].getName()==name)
            {
                index=i;
                break;
            }
            else
            {
                index=-1;
            }
        }
        if (index==-1)
        {
            cout<<"Food or dish does not exist in our database"<<endl;
            break;
        }
        food[index].deleteFood();
            cout<<"The food "<<name<< " has been deleted from our database"<<endl;
            break;
    }
} while (choice!=4);

cout<<"the food in our database are the following: "<<endl;

for (int i = 0; i < count; i++)
{
    if (food[i].getName()!="e")
    {
      food[i].showData();
    cout<<endl;
    }
}


cout<<"Thank you for using our program!"<<endl;

return 0;
}