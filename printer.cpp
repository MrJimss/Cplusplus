#include <iostream>
#include <string>
using namespace std;

class Dog
{
    private:
        string color;
        int age,weight;   

    public:
        void bark(){cout<<"woof"<<endl;}
        void setValues(string c, int n, int w){age=n; weight=w; color=c;}
        string getColor(){return color;}
        int getAge(){return age;}
        int getWeight(){return weight;}
};


void Dog::setValues(string color, int age, int weight,) //this pointer can only be used if the variable data members have the same name as parame
{
    this -> age= age;
    this -> weight=weight;
    this -> age=age;

}

int main()
{
	
		Dog fido;
		fido.setValues("Brown", 5, 15);

		cout << "fido is a " << fido.getColor()<< " dog" << endl;
		cout << "fido is " << fido.getAge() << " years old" << endl;
		cout << "fido weighs " << fido.getWeight() << " pounds" << endl;
		
		fido.bark();fido.bark();
		system("pause");
		return 0;
}