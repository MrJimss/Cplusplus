#include <iostream>
#include <string>
using namespace std;

double HatSize(float weightParameter, float heightParameter )
{
    double SubHatSize=(weightParameter/ heightParameter);
    double HatSize=2.9 * SubHatSize;
    return HatSize;
};

double JacketSize(float weightParameter, float heightParameter, int ageParameter)
{   
    int age = ageParameter-40;
    const float n1=0.125;
    double subSize1=weightParameter*heightParameter;
    double subSize2= subSize1/288;
    double subSize3;
    double sum=0;
    if(ageParameter>=40)
    {   if (age%2==0|| age==0)
        {
            for (int i = 0; i <= age;)
            {
                i+=10;
                sum++;
            }
        }
        else
        {
            age-=1;
            for (int i = 0; i <= age;)
            {
               i+=10;
               sum++;
            }
        }
        subSize3=(sum*n1)+subSize2;
        return subSize3;
    }
    else
    {
        return subSize2;
    }
};

double WaistSize(double weightParameter, int ageParameter )
{
    int age=ageParameter-30;
    const double n1=0.1;
    double extra=n1;
    double sum=0;
    double subSize=weightParameter/(5.7);
    double subSize2;

    if(ageParameter>=30)
    {
        if (age%2==0|| age==0)
        {
            for (int i = 0; i <= age;)
            {
                i+=2;
                sum++;

            }
        }
        else
        {
            age-=1;
            for (int i = 0; i <= age;)
            {
               i+=2;
               sum++;
            }
        }
        subSize2=(sum*n1)+subSize;
        return subSize2;
    }
    
    else
    {
        return subSize;
    }
};

int main()
{   double weight, height, hat, waist, jacket;
    int answer1, answer2, answer3,list,age;
    cout<< "Hello user. Welcome. This calculator will help you figure out what size of clothes should buy."<<endl;

    do
    {
        cout<<"Please,input your weight in pounds: ";
        cin>>weight;
        cout<<endl;

        cout<<"Please input your height in inches: ";
        cin>> height;
        cout<<endl;

        cout<<"Please input your age: ";
        cin>> age;
        cout<<endl;

       
        if (age<0 || height<0 || weight<0)
        {
            cout<<"Incorrect values. Please try again!"<<endl;
            answer1=1;
            continue;
        }
        
         cout<<"Thank you."<<endl;

        do 
        {
        cout<<endl;
        cout<<"Which type of measure would you like to know?"<<endl;
        cout<<"Press 1 for Hat Size."<<endl;
        cout<<"Press 2 for Jacket Size."<<endl;
        cout<<"Press 3 for Waist Size."<<endl;
        cout<<"Press 9 to Exit"<<endl;
        cout<<"Press 0 to restart."<<endl;
        cin>>list;
            switch (list)
            {
                case 0:
                    answer1=1;
                    break;
                case 1:
                {
                    hat=HatSize(weight,height);
                    cout<<endl;
                    cout<<"Thank you. Your ideal hat size is: " << hat <<" inches."<<endl;
                    cout<<endl;
                    cout<<"Press 1 to check other measures."<<endl;
                    cout<<"Press any other key to exit."<<endl;
                    cin>>answer3;
                     if (answer3==1)
                    {
                        answer1=0;
                        answer2=1;
                        break;
                    }
                    if (answer3!=1)
                    {
                        answer1=0;
                        answer2=0;
                        break;
                    }
                }
                    
                case 2:
                {
                    jacket=JacketSize(weight,height,age);
                    cout<<endl;
                    cout<<"Thank you. Your ideal jacket size is: " << jacket <<" inches."<<endl;
                    cout<<endl;
                    cout<<"Press 1 to check other measures."<<endl;
                    cout<<"Press any other key to exit."<<endl;
                    cin>>answer3;
                    if (answer3==1)
                    {
                        answer1=0;
                        answer2=1;
                        break;
                    }
                    if (answer3!=1)
                    {
                        answer1=0;
                        answer2=0;
                        break;
                    }
                }
                    
                case 3:
                {
                    waist=WaistSize(weight,age);
                    cout<<endl;
                    cout<<"Thank you. Your ideal waist size is: " << waist <<" inches."<<endl;
                    cout<<endl;
                    cout<<"Press 1 to check other measures."<<endl;
                    cout<<"Press any other key to exit."<<endl;
                    cin>>answer3;
                    if (answer3==1)
                    {
                        answer1=0;
                        answer2=1;
                        break;
                    }
                    if (answer3!=1)
                    {
                        answer1=0;
                        answer2=0;
                        break;
                    }     
                }
                case 9:
                    answer1=0;
                    break;
                default:
                    cout<<endl;
                    cout<<"INCORRECT INPUT. PLEASE RETRY.";
                    answer2=1;
                    break;
            }
         if (answer1==1)
        {
           break;
        }
        if (answer1==0 && answer2==0)
         {
             answer2=0;
             break;
        }
            
            
        } while (answer2==1);
    } while (answer1==1);

    cout<<"Thank you for using our program. Goodbye!";
 
return 0;
}