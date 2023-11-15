#include <iostream>
#include "Administrator.h"
#include "doctor.h"

using SavitchEmployees::Administrator;
using SavitchEmployees::Doctor;
using namespace std;

int main()
{
     Administrator a1("Carlos", "123-45-789", 69000); 
     a1.setAdminData();
     a1.printCheck();

     Doctor d1("Juan Carlos", "986-71-9696", 125000, "Ophtalmologist", 150); 
     Doctor d2("Susana Torres", "147869698", 182000, "Gynecologist", 250);
     Doctor d3(d1); 
     cout << "Doctor #1: " << endl; 
     d1.print();
     cout << "Doctor #2:" << endl; 
     d2.print();
     cout << "Doctor #3:" << endl; 
     d3.print();

     return 0;
}
