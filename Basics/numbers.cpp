#include <iostream> //iostream is a library that defines standard error, input and output
using namespace std; // if adding this line, std do not have to be added. using namespace is a library.

int main() {
std::cout <<"Enter two numbers:"<< std::endl;//standard end object. 
int n1=0,n2=0;
std:: cin >> n1>>n2; //standard input object >> means input operator.
//std means standard, therefore cout will be standard output object.<< means output operator
std::cout<<"The sum of " /*this is a string*/ 
<<n1<<" and "<< n2 <<" is "<<n1+n2<<std::endl;
//cerr and clog are error and information

    return 0; //this returns the type of function stated at the beggining in this case is an integer. 
}