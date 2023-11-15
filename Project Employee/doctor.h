
#include <string>
#include "SalariedEmployee.h"
using std::string;
namespace SavitchEmployees
{
     class Doctor : public SalariedEmployee
     {
          protected:
          string specialty;
          double fee;

          public:
          Doctor();
          Doctor(const string& theName, const string& theSsn, double theWeeklySalary, const string& theSpecialty, double theOfficevisitFee);
          Doctor(const Doctor& otherObject);
          Doctor& operator = (const Doctor& otherObject);
          void setSpecialty(const string& theSpecialty); void setOfficevisitFee(double theOfficevisitFee);
          string getSpecialty(); double getOfficevisitFee();
          void print();
}; }//SavitchEmployee