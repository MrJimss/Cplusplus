#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s1="As time by...";
    string s2="goes";
    string s3="Bill";

    cout<<"The initial phrase looks like this:\n"<<s1<<s2<<endl;
    int i=s1.find("by");
    //finds the position before the substring "by"

    s1.insert(i,s2+" ");
    //inserts s2 in s1 and adds a space to compensate the insertion

    cout<<"After adding s2 it looks like this:\n"<<s1<<endl;
    int j=s1.find("...");
    //finds the position of the dots to be removed

    s1.erase(j,3);
    //erases everything from position j onwards

    cout<<"After removing the remainder of s1 after substring 'by' looks like this:\n"<< s1<<endl;
    int k =s1.find("time");
    //determines the position of 'time', the next word to be deleted.

    s1.erase(k,4);
    s1.insert(k,s3);
    //function calls to remove the word found at position k and then inserting the new string.


    cout<<"Finally replacing substring 'time' with 'Bill'looks like this: \n"<<s1<<endl;

    return 0;
}