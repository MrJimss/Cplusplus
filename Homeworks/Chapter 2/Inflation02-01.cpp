/*
AUTHOR: CARLOS BARROS BUSTAMANTE

DESCRIPTION: THE PROGRAM WILL ALLOW THE USER TO CALCULATE THE PRICE OF AN OBJECT PURCHASED EVERY YEAR BUT ADJUSTED FOR AN INFLATION RATE SPECIFIED ALSO BY THE USER

*/


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void inflation(float price, int quantity, double rateParameter, int year, string item)
{
    double rate=rateParameter/100;
    double increase;
    double newprice;
    double increaseSum=0;
    for (int i = 0; i < year; i++)
    {
        increase=  price*rate;
        newprice=price + increase;
        price=newprice;
        increaseSum+=increase;
    }
    
    cout<<"The price of the "<<quantity<<" "<<item <<"s"<<" after "<<year<<" years will be "<<price<<" and the total price increase will be "<<increaseSum<<endl;
    cout<<"Thank you. Goodbye!";

}


int main()
{
    float price;
    int q,year;
    double ratep;
    string item;
    cout<<endl;
    cout<< "WELCOME, USER. THE PROGRAM WILL HELP YOU CALCULATE THE PRICE OF AN ITEM OR GROUP OF ITEMS ADJUSTED TO THE INFLATION RATE OF YOUR REGION."<<endl;
    
    cout<<"Please, tell the name of the item you would like to purchase:"<<endl;
    cin>>item;
    cout<<endl;

    cout<< "Please input the current price of the item"<<endl;
    cin>>price;
    cout<<endl;

    cout<<"Now input the quantity"<<endl;
    cin>>q;
    cout<< endl;

    cout<< "Now input the inflation rate in percentage (just numbers)"<<endl;
    cin>>ratep;
    cout<<endl;
    
    cout<<"Finally please input the amount of years you will be making the purchase"<<endl;
    cin>>year;

    if (price<0|| q<1 || ratep<0 || year <1)
    {
        while (price<0|| q<1 || ratep<0 || year <1)
    {
        cout<<"INCORRECT INPUT. PLEASE TRY AGAIN."<<endl;
        cout<< "Please input the current price of the item, then the quantity, the inflation rate and finally the amount of years you will be making this purchase"<<endl;
        cin>>price>>q>>ratep>>year;
    }
    }
       inflation(price,q,ratep,year,item);

    return 0;
}
 