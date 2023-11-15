#include <iostream>
#include <string>
using namespace std;

class printer
{
    private:
    string brand;
    int year;   
    public:
    void setBrand(string n){brand=n;}
    void setYear(int y){ year=y;}
    string getBrand(){return brand;}
    int getYear(){return year;}
};


int main()
{
 printer mg36;

 mg36.setBrand("HP");
 mg36.setYear(2020);

 cout<<"The printer is from year "<<mg36.getYear()<<" and is made by: "<<mg36.getBrand()<<endl;
return 0;
}