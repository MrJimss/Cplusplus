#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include "Date.h" //Includes the date class as a library
using namespace std;

class Person
{
protected:
     string name;
     string nationality;
     Date dob;
     Date dod;
     int sex;
public:
     Person(string n= "", int s= 0, string nat ="USA") : name(n),sex(s), nationality(nat){};
     void setdob(int m, int d, int y){dob.setDate(m,d,y);};
     void setdod(int m, int d, int y){dod.setDate(m,d,y);}
     void printName(){cout<<name;}
     void printNationality(){cout<<nationality;}
     void printdob(){cout<<dob;}
     void printdod(){cout<<dod;}
     void printsex(){cout<<(sex ? "male":"female");}
};

class Student:public Person
{
     protected:
     string id;
     Date dom;
     int credits;
     float gpa;
     public:
     Student(string n, int s=0, string i="", string nat="USE"): Person(n,s,nat),id(i), credits(0){};
     void setdom(int m, int d, int y){dom.setDate(m,d,y);}
     void printdom(){cout<<dom;}
     void printsex(){cout<<(sex ? "male":"female");}
};

int main()
{
     Student x("Peter Pan", 0, "USA");
     x.setdob(5,13,1989);
     x.setdod(6,15,2019);
     x.setdom(7,5,2019);
     x.printName();
     x.printNationality();
     cout<<"Born: ";x.printdob();
     cout<<"sex";x.printsex();
     cout<<"Matriculated: ";x.printdom();
     cout<<endl;

return 0;
}