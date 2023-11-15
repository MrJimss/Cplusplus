#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

class counterType
{
private:
     int count;
public:
     counterType(){count=0;};
     void setCount(int c)
     {
          if(c<0)
          {
               cout<<"Invalid number. Negative numbers will be converted to positive";
               c*=-1;
          }
          count=c;
     }
     void addCount();
     void reduceCount();
     void showCount();
     void counter();
     int getCount(){return count;}
};
void counterType::addCount()
{
     count+=1;
}

void counterType::reduceCount()
{
     count-=1; 
}
void counterType::showCount()
{
     cout<<"The Total count was: "<<count<<endl;
}

void counterType::counter()
{
     int n;
     do
     {
          cout<<"Enter any number:";
          cin>>n;
          if (n==-1)
          {
               reduceCount();
               if (count<0)
               {
               cout<<"Counter cannot be negative! Restarting... "<<endl;
               count=0;
               }
          }
          if(n==0)
          {
               cout<<"The current count is "<<getCount()<<endl;

          }
          if(n!=0 && n!=-1 && n!=-100)
          {
               addCount();
          }
     } while (n!=-100);
     showCount();
}


int main()
{
     counterType counter1;
     int initialCount;
     char answer;
     cout<<"The program will add 1 to a counter everytime you enter a valid number"<<endl;
     cout<<"Will decrease 1 if you enter -1."<<endl;
     cout<<"Enter -100 to stop the program."<<endl;
     cout<<"Enter 0 to check the current status of the counter"<<endl;
     cout<<endl;
     cout<<"Would you like to set the counter to a specific value?(y/n):"<<endl;
     cin>>answer;
     switch (answer)
     {
     case 'y':
          cout<<"enter the value of the counter:"<<endl;
          cin>>initialCount;
          counter1.setCount(initialCount);
          counter1.counter();
          break;
     case 'n':
          counter1.counter();
          break;
     default:
          cout<<"incorrect answer. Restart the program!"<<endl;
          break;
     }  
return 0;
}