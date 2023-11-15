#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stack>
#include <algorithm>
using namespace std;

const int maxx=1000;

class Stack
{
private:
     int top;
public:
     int a[maxx];
     Stack(){top:-1;};
     bool push(int x);
     int pop();
     bool isempty();
};
//implementing the functions
bool Stack::push(int x)
{
     if(top>=maxx)
     {
          cout<<"stack overflow";
          return false;
     }
     else
     {
          a[++top]=x;
          return true;
     }
}
int Stack::pop()
{
     if(top<0)
     {
          cout<<"Stack underflow";
          return 0;
     }
     else
     {
          int x=a[top--];
          return x;
     }
}
bool Stack:: isempty()
{
     return (top<0);
}
int main()
{
     struct Stack s;
     s.push(10);
     s.push(20);
     s.push(30);

     cout<<s.pop()<<"popped from stack"<<endl;
     cout<<s.pop()<<"popped from stack"<<endl;
     cout<<s.pop()<<"popped from stack"<<endl;
     cout<<s.pop()<<"popped from stack"<<endl;






return 0;
}