#include <iostream>
using namespace std;
int main()
{
     int n=0;
     cout<< "Hello! Welcome to guess the number. Please enter any number between 0 and 100 and you could win a wonderful prize. "<< endl;
     cin>> n;
     if (n==20)
          cout << "Congratulations! You guessed it! Now smile you are awesome!";
     else if (n<20)
          cout << "You are close just add a few more numbers";
     else 
          cout << "Less is more in this game.";

     return 0;
}