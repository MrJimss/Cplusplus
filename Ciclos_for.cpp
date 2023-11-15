#include <iostream>
#include <string>
using namespace std;
 int main()
 {
    int limite=0;
    cout<< "Enter the max number"<< endl;
    cin >> limite;
    for (int i=0; i<limite; i+=2)
        {
            cout<< i <<endl;
        }    
    return 0;
 }