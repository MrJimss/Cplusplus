#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <cstring>
using namespace std;
class Person
{
protected:
     char* name;

public:
     Person( const char* s ){name=new char[strlen(s)+1]; strcpy(name,s);}
     virtual void print(){cout<< "my name is: "<< name <<endl;}

};

class Student: public Person
{
     protected:
          double gpa;
     public: 
          Student(const char* s, float g): Person(s), gpa(g){}
          void print(){cout<< "my name is: "<< name <<" and my GPA is: "<<gpa<<endl;}
};

class Professor:public Person
{
protected:
     int publs;
public:
     Professor(const char* s, int n):Person(s),publs(n){};
     void print(){cout<< "my name is: "<< name << " and I have  "<<publs<<" publications"<<endl;}
};





int main()
{
     //Create objects
     Person* p;
     Person x("bob");
     p=&x;
     p->print();

     //object student
     Student y("tom",3.47);
     p=&y;
     p->print();

     //object professor
     Professor z("Ann",7);
     p=&z;
     p-> print();


return 0;
}