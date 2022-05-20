//IT21276682
//R.M.T.B.Rathnayake
//MLB_05.01_12
//Vehicle Rental System


#include "Driver.h"
#include <cstring>

//constructor with parameters

Driver::Driver(const char Employee_User_Name[], const char DriverCategory[], int DriverID, int Driver_contactNo, const char Employee_Address[], const char AssignedVehicle[])

{
	strcpy(Driver_Category, DriverCategory);
	Driver_ID = DriverID;
	contactNo = Driver_contactNo;
	strcpy(Assigned_Vehicle, AssignedVehicle);
}

void Driver::Review_Employee_Reports(const char* reports)
{
}

void Driver::setRideUserDetails(const char* add, int cNo, const char* uEmail)
{
}

void Driver::updateRideUserDetails(const char* add, int cNo, const char* uEmail)
{
}

void Driver::displayRideUserDetails(const char* add, int cNo, const char* uEmail)
{
}

Driver::~Driver()
{
}



