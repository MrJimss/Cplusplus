#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num=0;

    cout <<"Please, tell me the number list you would like to create"<< endl;
    cin >> num;
 for (int i = 0; i <= num; i+=1)
 {
    if (i % 2 == 1 )
    {
        cout << i << " is odd "<<endl;
    }
    else if (i%2==0)
    {
        cout << i <<" is even"<< endl;
    }
    else {
        cout << i << " is zero "<< endl;
    }
 }
return 0;
}