#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class smartphone
{
     public:
          string name;
          string color;
          int storage;
};

int main()
{
     smartphone iphone;
     smartphone samsung; 
     smartphone oneplus;

     cout<<"Please introduce the model of your iphone"<<endl;
     cin >> iphone.name;
     cout <<"Please introduce the model of your samsung"<<endl;
     cin >> samsung.name;
     cout<< "Please introduce the model of your oneplus"<<endl;
     cin>> oneplus.name;
     cout << "Now introduce the storage for the three phones"<<endl;
     cin>> iphone.storage>> samsung.storage>> oneplus.storage;
     cout<< "Enter your favorite color for each smartphone"<<endl;
     cout<<"Iphone color: ";
     cin>>iphone.color;
     cout<<"Samsung color:";
     cin>>samsung.color;
     cout<<"OnePlus color: ";
     cin>> oneplus.color;
     cout <<endl;
     cout<<"Thank you. Your smartphones:\n"<<endl;
     cout<<"Iphone "<<iphone.name<<" "<<iphone.storage<<"GB. Color "<<iphone.color<<endl;
     cout<< "Samsung "<<samsung.name<<" "<<samsung.storage<<"GB. Color "<<samsung.color<<endl;
     cout<<"And OnePlus "<<oneplus.name<<" "<<oneplus.storage<<"GB. Color"<<oneplus.color<<endl;
     cout<<endl;
     cout<<"Are ready to ship. You will get them by next week."; 
     return 0;
}