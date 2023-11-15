#pragma once
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;


class Date
{
     friend istream& operator>> (istream& , Date& );
     friend ostream& operator<< (ostream&, const Date& );
private:
     int month;
     int day;
     int year;
public:
     Date(int m=0, int d=0, int y=0): month(m), day(d), year(y){};
     void setDate(int m, int d, int y){month=m; day=d; year=y;}
};
istream& operator >>(istream& in, Date& x)
{
     in>> x.month>>x.day>>x.year;
     return in;
}
ostream& operator <<(ostream& out, const Date& x)
{
      string monthname[13]={"Januar","February","March"," April","May","June","July","August","September", " October", "November", "December"};
     out<<monthname[x.month]<<' '<<x.day<<","<<x.year;
}
