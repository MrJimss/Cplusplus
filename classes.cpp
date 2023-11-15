#include <iostream>
#include <string>
using namespace std;

class printer
{
    public:

        void setYear (int a) 
            {int year=a;}
        int getY()
            {return year;}
    private:
            string brand;
            int year;
};


int main()
{
        printer m1;
        m1.setYear(2);

        cout << "the printer is from "<< m1.getY()<<endl;

return 0;
    
}