#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

double Total (int cartParameter, double SubParameter);

int main()
{
 srand(35);
 int p1=rand()%15;
 int p2=rand()%25;
 int p3=rand()%50;
 int item1,item2,item3;
 double receipt;

 cout<< "Hello"<< endl;
 cout<< "Please enter the amount of Apples bought" <<endl;
 cin >> item1;
 cout <<"Each Apple has a price of $"<< p1 <<endl;
     cout<< endl;
 cout<< "Please enter the amount of Soap bought"<<endl;
 cin >> item2;
 cout <<"Each Soap has a price of $"<< p2 <<endl;
     cout<< endl;
 cout<< "Please enter the pounds Shrimp bought"<<endl;
 cin >> item3;
 cout <<"Each pound of Shrimp has a price of $"<< p3 <<endl;
     cout<< endl;
 

 int cart= item1 + item2+ item3;
 double subprice = (p1*item1)+(p2*item2)+(p3*item3);
 cout << "Thank you."<<endl;
 cout<< endl;
 cout<< "You have "<< cart << " items in your cart." << endl;
 cout << endl;
 cout << "The subtotal of your cart is $"<< subprice <<endl;
 cout << endl;

 receipt=Total(cart,subprice);



 cout.setf(ios::fixed);
 cout.setf(ios::showpoint);
 cout.precision(2);
 cout << "The final bill including the taxes is $" << receipt<< endl;

return 0;
}
double Total (int carParameter, double SubParameter)
{
    const double tax= 0.05;
    double subtotal;

    subtotal= SubParameter;
    return (subtotal + subtotal*tax);
}