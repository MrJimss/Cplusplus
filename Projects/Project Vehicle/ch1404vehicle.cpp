#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

class Vehicle
{
     friend ostream& operator<<(ostream&, const Vehicle&);
     friend istream& operator>>(istream&, Vehicle&);
     protected:
          string name;
          int cylinders;
          Person owner;
     public:
          Vehicle(){owner=Person();name="no name";cylinders=0;};
          Vehicle(string n, int c, Person& p1):name(n),cylinders(c),owner(p1){};
          Vehicle(const Vehicle& v):name(v.name),cylinders(v.cylinders),owner(v.owner){};
          Vehicle& operator=(const Vehicle& rightSide)
          {
               name=rightSide.name;
               cylinders=rightSide.cylinders;
               owner=rightSide.owner;
          };
};

istream& operator>>(istream& in, Vehicle& v)
{
     in>>v.name>>v.cylinders>>v.owner;
     return in;
}
ostream& operator<<(ostream& out, const Vehicle& v)
{
     return out<<"Manufacturer's name: "<<v.name<<"\ncylinders:"<<v.cylinders<<" \n the owner is :"<<v.owner;
}

class Truck: public Vehicle
{
     friend ostream& operator<<(ostream&, const Truck&);
     friend istream& operator>>(istream&, Truck&);
     protected:
          double loadCapacity;
          int towCapacity;
     public:
          Truck(Vehicle& v1,double lc, int tc):Vehicle(v1),loadCapacity(lc),towCapacity(tc){};
          Truck(const Truck& t);
};
istream& operator>>(istream& in, Truck& t)
{
     in>>t.name>>t.cylinders>>t.owner>>t.loadCapacity>>t.towCapacity;
     return in;
}
ostream& operator<<(ostream& out, const Truck& t)
{
     return out<<"Truck name: "<<t.name<<".\nNumber of cylinders:"<<t.cylinders<<".\nThe owner is:"<<t.owner<<". \nLoad capacity is: "<<t.loadCapacity<<" tons.\nTow capacity: "<<t.towCapacity<<" pounds.";
}
int main()
{
     Person p2("Sandra"),p3(p2);

     Vehicle v1("cadillac",50,p3);
     Truck t1(v1,56.7,10);
     cout<<t1;


return 0;
}