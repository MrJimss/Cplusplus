/* AUTHOR: CARLOS BARROS BUSTAMANTE
DESCRIPTION: THE PROGRAM WILL CALCULATE THE NUMBER OF CALORIES BURNED BASED ON THE METABOLIC EQUIVALENTS OF THE ACTIVITY
THE PROGRAM USES LOOPS TO OFFER A MORE FLUID EXPERIENCE FOR THE USER IN CASE THEY DO NOT KNOW THE AMOUNT OF METs
*/



#include <iostream>
#include <string>
using namespace std;

const double n=0.0175;
void caloriesBurned(double METp, double wp, float mp )
    {
        double calories;
        calories= mp*(n * METp * wp);
        cout<<"Based on the information provided you have burned "<<calories<< " calories during the activity."<<endl;
        cout<<"Thank you. Goodbye!";
        exit(0);
    }



int main()
{
 int weight;
 double weightp;
 int answer;
 float minutes;
 double MET;
 int list;

 
 cout<<"Hello, user. Welcome to the calories per minute calculator"<<endl;
 cout<<"I will help you calcualte the calories burned in a particular activity."<<endl;
 cout<<"First enter your weight in pounds :"<<endl;
 cin>>weightp;

 weight=weightp/(2.2);

 cout<<"Please enter the amount of minutes you spend on the activity: "<<endl;
 cin>>minutes;

 cout<<"Press 1 to enter the amount of MET (Metabolic equivalents)"<<endl;
 cout<<"Press 2 if would you like to select one from our list"<<endl;
 cin>>answer;
 while (answer!=1 || answer !=2)
 {
    switch (answer)
    {
    case 1:
        cout<<"Please enter the amount of METs:"<<endl;
        cin>>MET;
        caloriesBurned(MET,weight,minutes);
        break;
    case 2:
    cout<<"we have some predetermined activities you can choose from."<<endl;
    cout<< "Press 1 for Running."<<endl;
    cout<<"Press 2 for Baseball."<<endl;
    cout<<"Press 3 for Sleeping."<<endl;
    cin>>list;
        while (list!=1 || list!=2 || list!=3)
        {
                switch (list)
                {
                    case 1 :
                        MET=10;
                        caloriesBurned(MET,weight,minutes);
                        break;
                    case 2:
                        MET=8;
                        caloriesBurned(MET,weight,minutes);
                        break;
                    case 3:
                        MET=1;
                        caloriesBurned(MET,weight,minutes);
                        break;
                    default:
                        cout<<endl;
                        cout<<"Incorrect selection!"<<endl;
                        cout<<"Please enter a number from the list! "<<endl;
                        break;
                }
                  cout<<endl;
                        cout<<"Press 1 for Running."<<endl;
                        cout<<"Press 2 for Baseball."<<endl;
                        cout<<"Press 3 for Sleeping."<<endl;
                        cin>>list;
          
        }

    default:
    cout<<"Incorrect selection."<<endl;
        break;
    }
     cout<<"Press 1 to enter the amount of MET (Metabolic equivalents)"<<endl;
    cout<<"Press 2 if would you like to select one from our list"<<endl;
    cin>>answer;
 }
return 0;
}