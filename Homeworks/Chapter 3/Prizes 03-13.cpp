#include <iostream>
#include <string>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{

    int w1,w2,w3,w4;
    char good;
    cout<<"Hello! Welcome to the Grand Prix. Our 25 finalists are ready to win one of our four prizes!"<<endl;
    do
    {   
        w1=(rand()%26);
        w2=(rand()%26);
        w3=(rand()%26);
        w4=(rand()%26);
        if(w1==0 || w2==0 || w3==0 || w4==0 || w1==w2 || w1==w3 || w1==w4 || w2==w3 || w2==w4 || w3==w4)
            good='n';
        else
            good='y';
    }while (good=='n'|| good=='n');
       
        cout<<endl;
        cout<<"And the winners are: "<<endl;
        cout<< "Participant number "<< w1 <<endl;
        cout<< "Participant number "<< w2 <<endl;
        cout<< "Participant number "<< w3 <<endl;
        cout<< "Participant number "<< w4 <<endl;                
        cout<<"Thank you for participating!";
return 0;
}