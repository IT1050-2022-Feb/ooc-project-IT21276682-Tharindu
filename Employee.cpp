#include "Employee.h"
#include <cstring>

Employee::Employee()
{
}

//constructor with parameters
Employee::Employee(char Employee_User_Name[], int EmployeeID, const char Employee_Address[], int Employee_contactNo, char Employee_email[])
{
	strcpy(Employee_Name, Employee_User_Name);
	Employee_ID = EmployeeID;
	strcpy(address, Employee_Address);
	contactNo = Employee_contactNo;
	strcpy(email, Employee_email);
}

void Employee::Review_Employee_Reports(char reports)
{
}

void Employee::setRideUserDetails(char add, int cNo, char uEmail)
{
}

void Employee::updateRideUserDetails()
{
}

void Employee::displayRideUserDetails()
{
}

Employee::~Employee()
{
}

