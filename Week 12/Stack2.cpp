#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <algorithm>
using namespace std;


void showStack(stack <int> gquiz)
{
     stack<int> grade=gquiz;
     while(!grade.empty())
     {
          cout<<" "<<grade.top();
          grade.pop();
     }
     cout<<endl;

}


int main()
{
     int x=0;
     int a=10;
     stack<int> gradequiz;
     for (int i = 0; i < 5; i++)
     {
          gradequiz.push(x);
          x+=a;
     }
     cout<<"the values are:"<<endl;
     showStack(gradequiz);

     cout<<"grade.size()="<<gradequiz.size()<<endl;
     cout<<"grade.top()="<<gradequiz.top()<<endl;

     cout<<"grade.pop()=";
     gradequiz.pop();
     showStack(gradequiz);




return 0;
}