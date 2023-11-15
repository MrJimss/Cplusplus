#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

class Money
{
private:
     int dollar,cents;
public:
     void setDollar(int d){dollar=d;}
     int getDollar(){return dollar;}
     void setCents(int c){cents=c;}
     int getCents(){return cents;}
     double Amount()
     {    
          int d=(cents/100)+dollar;
          double dollaramount=(0.0+(double)d);
          int c=cents%100;
          double centsamount=1.0*c/100;
          double TotalAmount=0.0+dollaramount+centsamount;
          return TotalAmount;
     }
};


int main()
{
     Money m1,m2;
     double dollarAmount,centsAmount;
     cout<<"Hello, how many dollars you currently have in your checking account?"<<endl;
     cout<<"Type the dollar amount first followed by a space and the cents amount."<<endl;
     cout<<"$";cin>>dollarAmount;
     m1.setDollar(dollarAmount);
     cout<<"c";cin>>centsAmount;
     m1.setCents(centsAmount);

     double dollarAmount2,centsAmount2;
     cout<<"Hello, how many dollars you currently have in your savings account?"<<endl;
     cout<<"Type the dollar amount first followed by a space and the cents amount."<<endl;
     cout<<"$";cin>>dollarAmount2;
     m2.setDollar(dollarAmount2);
     cout<<"c";cin>>centsAmount2;
     m2.setCents(centsAmount2);

     double final1=m1.Amount();
     double final2=m2.Amount();
     cout<<endl;
     cout<<"-------------"<<endl;
     cout<<"Your first account currently has: "<<endl;
     cout<<"\t$"<<m1.getDollar()<<" dollars."<<endl;
     cout<<"\t"<<m1.getCents()<<" cents."<<endl;
     cout<<"For a total of $"<<final1<<" dollars."<<endl;

     cout<<endl;
     cout<<"-------------"<<endl;
     cout<<"Your secodn account currently has: "<<endl;
     cout<<"\t$ "<<m2.getDollar()<<" dollars."<<endl;
     cout<<"\t "<<m2.getCents()<<" cents."<<endl;
     cout<<"For a total of $"<<final2<<" dollars."<<endl;



return 0;
}