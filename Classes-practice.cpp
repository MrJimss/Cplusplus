#include <iostream>
#include <string>
using namespace std;

class Computer
{
private:
    int year;
    string name;
    char model;
    bool aluminum;
public:
    void setValues(int y,string n,char a, bool b)
    {
        name =n;
        year =y;
        model =a;
        aluminum =b;
    }
    string getName()
    {
        return name;
    }
    int getYear()
    {
        return year;
    }
    char getModel(){
        return model;
    }
    bool getChasis()
    {
        return aluminum;
    }
} macbook, envy, imac;

int main()
{
    macbook.setValues(2022, "macbook Air", '2',true);
    imac.setValues(2012,"iMac",'i7',false);
    envy.setValues(2019,"HP",'i7',true);

    cout<<" The computer is a "<<macbook.getName()<<" from the year "<<macbook.getYear()<< " is a model m"<<macbook.getModel()<<". Is made of aluminum? "<<macbook.getChasis()<<". Thank you!"<<endl;
    cout<<" The computer is an "<<imac.getName()<<" from the year "<<imac.getYear()<< " is a model m"<<imac.getModel()<<". Is made of aluminum? "<<imac.getChasis()<<". Thank you!"<<endl;
    cout<<" The computer is an "<<envy.getName()<<" from the year "<<envy.getYear()<< " is a model m"<<envy.getModel()<<". Is made of aluminum? "<<envy.getChasis()<<". Thank you!";
return 0;
}