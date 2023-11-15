#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

class Rational 
{
    friend void addition(const Rational&, const Rational&);
    friend void substraction(const Rational&, const Rational&);
    friend void multiplication(const Rational& , const Rational&);
    friend void division (const Rational&, const Rational& );
    friend double floating(const Rational&);
    friend ostream& operator<<(ostream&, const Rational&);
    friend istream& operator>>(istream&, Rational&);
    private:
        int num;
        int den;
    public:
        Rational(int p=0, int q=1):num(p),den(q){reducedForm();};
        Rational (const Rational&r):num(r.num),den(r.den){};
        bool operator==(const Rational& );
        Rational& operator=(const Rational& otherSide)
        {
            num=otherSide.num;
            den=otherSide.den;
        };
        void reducedForm();
};

int gcd(int a, int b) 
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
};

int lcm(int a, int b)
{
    int lcm;
    if(a<b)
        lcm=a;
    else
        lcm=b;
    while(true) 
    {
        if(lcm%a==0 && lcm%b==0) 
        {
            break;
        }
    lcm++;
    };
    return lcm;
};

void Rational::reducedForm()
{
    if(num==0)
        den=0;
    if(num<0 && den<0)
    {
        num*=-1;
        den*=-1;
    }
    if (den==1) 
        return;
    int sign = (num<0 ?  -1 : 1);
    int g=gcd((sign*num), den);
    num/=g;
    den/=g;
};

double floating(const Rational& r)
{
    double a=r.num;
    double b=r.den;
    double c=a/b;
    return c;
}

bool Rational::operator==(const Rational& otherR)
{
    return(num==otherR.num)&&(den==otherR.den);
}

ostream& operator<<(ostream& out, const Rational& r1)
{
    char separator='/';
    if(r1.num!=0)
        if(r1.num%r1.den!=0)
            return out<<r1.num<<separator<<r1.den;   
    else
    return out<<r1.num;
};

istream& operator>>(istream& ins, Rational& r)
{
    char separator='/';
    ins>>r.num;
    ins>>separator;
    ins>>r.den;
    return ins;
}

void addition(const Rational&r1, const Rational&r2)
{
    char answer;
    int lecm=lcm(r1.den,r2.den);
    int p1=(lecm/r1.den)*r1.num;
    int p2=(lecm/r2.den)*r2.num;
    int sum=p1+p2;
    Rational r3;
    r3.num=sum;
    r3.den=lecm;
    r3.reducedForm();
    cout<<"The sum of the two numbers is "<<r3<<endl;
    cout<<"Do you want to convert it to floating-point format?(y/n):";
    cin>>answer;
    if(answer=='y'||answer=='Y')
    {
        double f=floating(r3);
        cout<<"The floating point form of the fraction"<<r3<<" is: "<<f<<endl;
    }
};
void substraction(const Rational&r1, const Rational&r2)
{
    char answer;
    int lecm=lcm(r1.den,r2.den);
    int p1=(lecm/r1.den)*r1.num;
    int p2=(lecm/r2.den)*r2.num;
    int sum=p1-p2;
    Rational r3;
    r3.num=sum;
    r3.den=lecm;
    r3.reducedForm();
    cout<<"The substraction of the two numbers is "<<r3<<endl;
    cout<<"Do you want to convert it to floating-point format?(y/n):";
    cin>>answer;
    if(answer=='y'||answer=='Y')
    {
        double f=floating(r3);
        cout<<"The floating point form of the fraction"<<r3<<" is: "<<f<<endl;
    }

};

void multiplication(const Rational& r1, const Rational& r2)
{
    char answer;
    Rational r3;
    r3.num=r1.num*r2.num;
    r3.den=r1.den*r2.den;
    r3.reducedForm();
    cout<<"The multiplication of the two numbers is: "<<r3<<endl;
    cout<<"Do you want to convert it to floating-point format?(y/n):";
    cin>>answer;
    if(answer=='y'||answer=='Y')
    {
        double f=floating(r3);
        cout<<"The floating point form of the fraction"<<r3<<" is: "<<f<<endl;
    }
}
void division(const Rational& r1, const Rational& r2)
{
    char answer;
    Rational r3;
    r3.num=r1.num*r2.den;
    r3.den=r1.den*r2.num;
    r3.reducedForm();
    cout<<"The division of the two numbers is: "<<r3<<endl;
    cout<<"Do you want to convert it to floating-point format?(y/n):";
    cin>>answer;
    if(answer=='y'||answer=='Y')
    {
        double f=floating(r3);
        cout<<"The floating point form of the fraction"<<r3<<" is: "<<f<<endl;
    }
}
int main()
{
    Rational r1, r2;
    int choice;
    do
{
cout<<"Enter 2 rational numbers in the form \"p/q\"."<<endl;
cin>>r1>>r2;
cout<<"Choose: \nAdd[1]\nSubstract[2]\nMultiply[3]\nDivide[4]\nCompare[5]:"<<endl;
cout<<"Choose [0] if you want to exit."<<endl;
cin>> choice;
if(choice>5|| choice<0)
{
    cout<<"Incorrect input. Closing program.";
    return 0;
}
switch (choice)
{
case 1:
    addition(r1,r2);
    break;
case 2:
    substraction(r1,r2);
    break;
case 3:
    multiplication(r1,r2);
    break;
case 4:
    division(r1,r2);
    break;
case 5:
    if(r1==r2)
    {
        cout<<"The numbers are the same"<<endl;
        break;
    }
    else
    {
        cout<<"The numbers are different."<<endl;
    }
    break;
}
}while(choice!=0);
cout<<"Thank you for running our program!"<<endl;


return 0;
}