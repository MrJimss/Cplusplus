#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

class Complex
{
     friend ostream& operator<<(ostream&, const Complex&);
     friend istream& operator>>(istream&, Complex& );
private:
     double realpart;
     double imaginarypart;
public:
     Complex (double real = 0.0, double imag =0.0) {realpart = real; imaginarypart = imag; }

};


ostream& operator<<(ostream& out, const Complex& num)
{
     char sign='+';
     if(num.imaginarypart<0)
          sign='-';
     if(num.realpart==0 && num.imaginarypart==0)
          cout<<0;
     else if (num.imaginarypart==0)
          cout<<num.realpart;
     else if (num.realpart==0)
          cout<<num.imaginarypart<<'i';
     else 
          cout<<num.realpart<< ' '<<sign<<' '<<abs(num.imaginarypart)<<'i';
     return out;
}
istream& operator>>(istream& in, Complex& num)
{
     string temp;
     double value;
     int pluslocation,minuslocation,ilocation;
     
     in >> value;
     getline(cin, temp);
     pluslocation=temp.find('+');
     minuslocation=temp.find('-');
     ilocation=temp.find('i');

     if (pluslocation>=0 || minuslocation>=0)
     {
          num.realpart=value;
          if(pluslocation>=0 )temp.replace(pluslocation,1," ");
          if(minuslocation>=0)temp.replace(minuslocation,1," ");
          if (ilocation>=0)temp.replace(ilocation,1, " ");

          num.imaginarypart = atof(temp.c_str());
          if(minuslocation>=0) num.imaginarypart=-num.imaginarypart;
     }
     else if (ilocation>=0) num.imaginarypart=-num.imaginarypart;

     return in;
}



int main()
{
     Complex complexone;
     cout<<"enter a complex number in the format 3 + 2i); "<<endl;
     cin>>complexone;
     //Complex a(12.5, -18.5);
     cout<<" the complex number just created is: "<<complexone<<endl;
return 0;
}