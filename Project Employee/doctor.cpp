//This is the file Doctor.cpp

#include <iostream> 
#include <string> 
#include "doctor.h"
using std::string; 
using std::cout; 
using std::endl;

namespace SavitchEmployees
{
     Doctor::Doctor() : SalariedEmployee(), specialty("No specialty"), fee(0){} // deliberately empty
     Doctor::Doctor(const string& theName, const string& theSsn, double theWeeklySalary, const string& theSpecialty, double theFee): SalariedEmployee(theName, theSsn, theWeeklySalary), specialty(theSpecialty), fee(theFee){} // deliberately empty
     Doctor::Doctor(const Doctor& otherObject):SalariedEmployee(otherObject.getName(), otherObject.getSsn(), otherObject.getSalary()),
     specialty(otherObject.specialty), fee(otherObject.fee) {}// deliberately empty
     Doctor& Doctor::operator = (const Doctor& otherObject) 
     {
     setName(otherObject.getName()); 
     setSsn(otherObject.getSsn()); 
     setSalary(otherObject.getSalary());
     specialty = otherObject.specialty; 
     fee = otherObject.fee;
     return *this;
     }
     void Doctor::setSpecialty(const string& theSpecility){ specialty = theSpecility; } 
     void Doctor::setOfficevisitFee(double theOfficeVisitFee){ fee = theOfficeVisitFee;}
     }