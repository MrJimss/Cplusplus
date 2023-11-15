#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

class time
{
private:
     int seconds;
     void convert();
public:
     time();
     time(int sec);

};

time::time(int sec)
{
     seconds=sec;
}

time::time()
{
     seconds=0;
}



int main()
{
cout<<<<endl;
return 0;
}