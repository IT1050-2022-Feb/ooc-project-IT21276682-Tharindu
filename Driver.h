//IT21276682
//R.M.T.B.Rathnayake
//MLB_05.01_12
//Vehicle Rental System


#include "Employee.h"
class Driver : public Employee
{
protected:
	char Driver_Category[50];
	int Driver_ID;
	int contactNo;
	char Assigned_Vehicle[50];

public:
	Driver(const char Employee_User_Name[], const char DriverCategory[], int DriverID, int Driver_contactNo, const char Employee_Address[], const char AssignedVehicle[]);
	void Review_Employee_Reports(const char* reports);
	void setRideUserDetails(const char* add, int cNo, const char* uEmail);
	void updateRideUserDetails(const char* add, int cNo, const char* uEmail);
	void displayRideUserDetails(const char* add, int cNo, const char* uEmail);
	~Driver();
};

