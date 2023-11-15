#include <iostream>
#include <string>
using namespace std;

int main()
{
    int age;
    cout << "Hello and welcome user! Please introduce your age to verifiy your identity"<< endl;
    cin >> age;
    switch (age)
    {
    case 12:
        cout << "wow you are young!"<<endl;
        break;
    case 10:
        cout << "You are a grown up "<< endl;
        break;
    default:
        cout << "You are an old person"<<endl;
        break;
    }
    return 0;
}
