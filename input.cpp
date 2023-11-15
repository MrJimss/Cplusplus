#include <iostream>
using namespace std;
int main()

{
	int L;
	cout << "Hello reader.\n"
	     << "welcome to C++.\n";
	cout << "How many programming languages have you used?";
	cin >> L;
	if (L < 1)
		cout << "You might prefer a different book by the same author.";
	else 
		cout << "Enjoy the book.";
    
    return 0;

}
