#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

class Person
{
     friend istream& operator >>(istream& , Person&);
     friend ostream& operator <<(ostream& , const Person& );
private:
     string name;
public:
     Person(string n="null"):name(n){};
     Person(const Person& theObject):name(theObject.name){};
     string getName(){return name;};
     Person& operator=(const Person& rtSide)
     {
          name=rtSide.name;
     };
     void setName(string n)
     {
          name=n;
     };
};


istream& operator >>(istream& in, Person& p)
{
     return in>>p.name;
}
ostream& operator<<(ostream& out, const Person& p)
{
     return out<<p.name;
}
