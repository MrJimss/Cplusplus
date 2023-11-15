#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <queue>
#include <algorithm>
using namespace std;


int main()
{
queue <int> numintq;
numintq.push(10);
numintq.push(5);
numintq.push(-1);
numintq.push(20);

cout<<"queue contains "<<numintq.size()<<"elements"<<endl;
cout<<"elements at front: "<<numintq.front()<<endl;
cout<<"elements at the back: "<<numintq.back()<<endl;

while (numintq.size()!=0)
{
     cout<<"Deleting an element "<<numintq.front()<<endl;
     numintq.pop();
     if(numintq.empty())
     {
          cout<<"the queue is now empty!"<<endl;
     }
}
//queue deletes elements based in the FIFO rule



//priority queue removes elements based on priority
//adding priority queue

priority_queue <int> pq1;
pq1.push(100);
pq1.push(200);
pq1.push(300);
pq1.push(400);
cout<<endl;
cout<<"The priority queue is:"<<endl;

while (!pq1.empty())
{
     cout<<"Deleting an element "<<pq1.top()<<endl;
     pq1.pop();
     if(pq1.empty())
     {
          cout<<"the queue is now empty!"<<endl;
     }
}
return 0;
}