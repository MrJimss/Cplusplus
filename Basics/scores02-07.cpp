#include <iostream>
#include <string>
using namespace std;
int main()
{
    int size, grade,max_grade;
    int gradeSum=0;
    int maxSum=0;

    cout<<endl;
    cout<<"Welcome, user. This program will help you calculate the total grade for you classroom excercises."<<endl;

    cout<<"Please input the amount of excercises: ";
    cin>>size;


    for (int i = 1; i <=size; i++)
    {
        cout<<endl;
        cout<<"Enter the grade for excercise "<<i<<" :";
        cin>>grade;
        cout<<"Enter the maximum grade for this excercise: ";
        cin>>max_grade;
        gradeSum+=grade;
        maxSum+=max_grade;
    }


    float average=(gradeSum*100)/maxSum;
    cout<<endl;
    cout<<"Your total is "<<gradeSum<<" of "<<maxSum<<" points. That equals to "<<average<<" %"<<endl;
    cout<<"Thank you. Goodbye!";

return 0;
}