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
        // Rational(){num=0;den=1;};
        // Rational(int n){num=n;den=1;};
        // Rational(int n, int d){ num=n,den=d;};

        // Rational():num(0),den(1){};
        // Rational(int n):num(n),den(1){};
        // Rational(int n, int d ):num(n),den(1){};

        Rational(int n=0, int d=1): num(n),den(d){ reduce();};
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


    int sgn;
    if(num<0)
        sgn= -1;
    else 
        sgn= 1;
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

    Rational x(-1), y(22,7), z;

    cout<<"X= ";
    x.print();
   cout<<"Y= ";
   y.print();
   cout<<"z= ";
   z.print();
   cout<<endl;




    return 0;
}


