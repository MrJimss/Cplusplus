#include <iostream>
#include <cmath>
using namespace std;

bool isLeapYear(int year)
{
    bool leap=false;
    if (year%400==0)
        leap= true;
    if (year%4==0 && year%100!=0 )
    {
        leap=true;
    }
    return leap;
}  

int getCenturyValue(int year)
{
    int century,value, firstDigits;
    int sizeYear= log10(year)+1;
    switch (sizeYear)
    {
    case 2:
        century=year%4;
        value=2*(1-century);
        return value;
        break;
    case 3:
        firstDigits=year/10;
        century=firstDigits%4;
        value=2*(2-century);
        return value;
        break;
    case 4:
        firstDigits=year/100;
        century=firstDigits%4;
        value=2*(3-century);
        return value;
        break;
    default:
        cout<<"Error."<<endl;
        break;
    }
   
}

int getYearValue(int year)
{
    int lastDigits,valueYear,result;
    int sizeYear= log10(year)+1;
    switch (sizeYear)
    {
    case 2:
        result=year/4;
        valueYear=result+year;
        return valueYear;
        break;
    case 3:
        lastDigits=year%10;
        result=lastDigits/4;
        valueYear=result+lastDigits;
        return valueYear;
        break;
    case 4:
        lastDigits=year%100;
        result=lastDigits/4;
        valueYear=result+lastDigits;
        return valueYear;
        break;
     default:
        cout<<"Error."<<endl;
        break;
    }
 
}
int getMonthValue(int month, int year)
{
    bool leap= isLeapYear(year);
    switch (month)
    {
    case 01:
       
        if(leap)
            return 6;
        else
            return 0;
        break;
    case 02:
        if(leap)
            return 2;
        else
            return 3;
        break;

    case 03: return 3; break;

    case 04: return 6;break;

    case 05: return 1;  break;

    case 06: return 4; break;

    case 07: return 6; break;

    case 8: return 2; break;

    case 9: return 5; break;

    case 10: return 0; break;

    case 11: return 3;break;

    case 12: return 5; break;   
    }
}


int main()
{
    int year,month, day;
    char answer='y';
    cout<<"Welcome user. I will help you calculate the day of the week."<<endl;
    cout<<endl;
    do
     {  
        cout<<"Please enter the number of the month(MM): ";
        cin>> month;
        cout<< "Please enter a number for the day(DD): ";
        cin>>day;
        cout<<"Please enter a number for the year(yyyy): ";
        cin>>year;

        if(year>9999 || year<10 || month>12 || month <0 || day<0)
        {
            cout<<"Incorrect input. Please type in a valid number. "<<endl;
            break;
        }
        else if (month ==2 && day>28)
        {
            cout<<"Verify your input."<<month<<", "<<day<<" Is this correct? (y/n)"<<endl;
            cin>> answer;
            break;
        }
        
        int sumDate=day+getMonthValue(month,year)+getYearValue(year)+getCenturyValue(year);
        int dayOfTheWeek=sumDate%7;
        switch (dayOfTheWeek)
        {
        case 0:
            cout<<"The day of the week is: Sunday.";
            break;
        case 1:
            cout<<"The day of the week is: Monday.";
            break;
        case 2:
            cout<<"The day of the week is: Tuesday.";
            break;
        case 3:
            cout<<"The day of the week is: Wednesday.";
            break;
        case 4:
            cout<<"The day of the week is: Thursday.";
            break;
        case 5:
            cout<<"The day of the week is: Friday.";
            break;
        case 6:
            cout<<"The day of the week is: Saturday.";
            break;
        
        default:
            cout<<"Error.";
            break;
        }
        cout<<"Do you wish to enter another date? (y/n)";
        cin>>answer;
    } while(answer =='y'|| answer=='Y');
    cout<<"Thank you! Goodbye!"<<endl;
    return 0;
} 