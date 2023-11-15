#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int RowSize=10,ColumnSize=10;
int Multiplication(int a, int b);
//Accepts 2 integers to be mutiplied and return another integer

int main()
{
   int m[RowSize][ColumnSize];
    
    for(int i=1;i<=RowSize;i++)
    {
        for(int j=1;j<=ColumnSize;j++)
        {
                m[i][j] = Multiplication(i,j);
                cout<< setw(5)<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
int Multiplication(int a, int b)
{
    int total=a*b;
    return total;
}