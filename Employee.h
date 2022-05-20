#pragma once
class Employee
{
protected:
	char Employee_Name[50];
	int Employee_ID;
	char address[100];
	int contactNo;
	char email[50];

public:
	Employee();
	Employee(char Employee_User_Name[], int EmployeeID, const char Employee_Address[], int Employee_contactNo, char Employee_email[]);
	void Review_Employee_Reports(char reports);
	void setRideUserDetails(char add, int cNo, char uEmail);
	void updateRideUserDetails();
	void displayRideUserDetails();
	~Employee();

};

