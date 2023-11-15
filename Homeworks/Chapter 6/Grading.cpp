#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

struct Record
{
     double quiz1, quiz2, midterm, finalGrade;

};

void inputScores(Record& scores)
{
     cout<<"Enter quiz scores from 0 to 10"<<endl;
     cout<<"Quiz 1: ";
     cin>>scores.quiz1;
     cout<<"Quiz 2: ";
     cin>>scores.quiz2;

     if(scores.quiz1<0 || scores.quiz2<0 || scores.quiz1>10 || scores.quiz2>10)
     {
          cout<<"Incorrect input. Quiz scores are from 0 to 10. Restart the program";
          exit(1);
     }
     cout<<"Input the scores for the midterm: ";
     cin>>scores.midterm;
     cout<<"Now for the final exam: ";
     cin>>scores.finalGrade;

     if(scores.midterm<0 || scores.finalGrade<0 || scores.midterm>100 || scores.finalGrade>100)
     {
          cout<<"Incorrect input. Quiz scores are from 0 to 10. Restart the program";
          exit(1);
     }
}

void DisplayRecord(Record& scores)
{
     double q1=scores.quiz1/10;
     double q2=scores.quiz2/10;
     double quizTotal=((q1+q2)/2)*25;

     double midterm=scores.midterm*0.25;
     double finalE=scores.finalGrade*0.5;
     double courseScore=quizTotal+midterm+finalE;
     cout<<"--------------------------------"<<endl;
     cout<<"Final scores: "<<endl;
     cout<<"Quiz1="<<scores.quiz1<<endl;
     cout<<"Quiz2="<<scores.quiz2<<endl;
     cout<<"Midterm="<<scores.midterm<<endl;
     cout<<"Final="<<scores.finalGrade<<endl;
     cout<<"The final course score for the student is: "<<courseScore<<endl;
     cout<<"The final course letter for the student is: ";

		if(courseScore>=90 && courseScore<100 )
		{
			cout<<"A"<<endl;
		}
		if(courseScore>=80 && courseScore<90 )
		{
			cout<<"B"<<endl;
		}
		if(courseScore>=70 && courseScore<80 )
		{
			cout<<"C"<<endl;
		}
		if(courseScore>=60 && courseScore<70 )
		{
			cout<<"D"<<endl;
		}
		if(courseScore<=60 )
		{
			cout<< "F"<<endl;
		}
      cout<<"--------------------------------"<<endl;
     
}

int main()
{
     Record r1;
     cout<<"Hello. The program will calculate the student's final score and the final grade letter."<<endl;
     inputScores(r1);
     DisplayRecord(r1);
     cout<<"thank you for using our program!"<<endl;
return 0;
}