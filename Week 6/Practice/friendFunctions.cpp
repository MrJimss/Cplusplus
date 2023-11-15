// Created on Carlos’ iPad.

#include <iostream>
using namespace std;

class Rational
{
    friend ostream& operator<<(ostream&, const Rational&); //prototype
    friend istream& operator>>(istream&, Rational&);//const will protect the variable froom being changed
    private:
    int num, den;
    public:
    Rational(int n=0, int d=1): num(n), den(d){};
};

//friend function definition to customize the cout. Overloading and customizing. 
ostream& operator<<(ostream&  /*name of the function*/ostr, const Rational& r )
{
    return ostr<<r.num<<'/'<<r.den;
}
istream& operator>>(istream& istr, Rational& r2)
{
    return istr>>r2.num>>r2.den; // no need to add the objects, but in my test behave differently
}



int main() 
{
    Rational x, y;
    cout<<"Hello, please input the values to show the rational:";
    cin>>x>> y;
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    return 0;
}