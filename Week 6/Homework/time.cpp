#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

class Time
{
private: 
     double seconds,minutes, hours;
     string note;
     void convert();
public:
     Time(int sec=0):seconds(sec) {convert();};
     void print(){cout<<floor(hours)<<" hour(s)\n"<<floor(minutes)<<" minutes\n"<<seconds<<" seconds.\n"<<note<<endl;};
};

void Time::convert()
{
     if (seconds<0)
     {
          seconds*=-1;
          note= "Negative time not allowed. Converted into positive values.";
     }
     hours=(seconds/3600);
     minutes= (hours-floor(hours))*60;
     seconds=(minutes-floor(minutes))*60;
}

int main()
{
     Time a(5000), b , c(-568), d(56842048);
     a.print();
     cout<<endl;
     b.print();
     cout<<endl;
     c.print();
     cout<<endl;
     d.print();


return 0;
}