// Created on Carlos’ iPad.

#include <iostream>
using namespace std;

class Rational
{
    private:
        int num;
        int den;
        void reduce(); //private data member function
    public:
        Rational(int n=0, int d=1): num(n),den(d){ reduce();};

        //copy constructor
        Rational(const Rational&r):num(r.num), den(r.den){};
        void print(){cout<<num<<" / "<<den<<endl;};
};

int gcd(int, int );
void Rational::reduce()
{
    if(num==0 || den==0 )
    {
        num=0;
        den=1;
    }
    if(den<0)
    {
        num*=-1;
        den*=-1;
    }
    if (den==1) 
        return;
    int sgn = (num<0 ?  -1 : 1); // find this way of writing if statements ? true and : false
    int g=gcd(sgn* num, den);
    num/= g;
    den/=g;
}

int gcd(int m, int n)
{
    if(m<n)
         swap(m,n);
    while(n>0)
    {
    int r=m%n;
     m=n;
    n=r;
    }
    return m;

}

int main() 
{

    Rational x(100, 360), y(x);

    cout<<"X= ";
    x.print();
   cout<<"Y= ";
   y.print();
   cout<<endl;




    return 0;
}


