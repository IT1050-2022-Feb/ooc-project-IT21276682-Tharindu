//IT21276682
//R.M.T.B.Rathnayake
//MLB_05.01_12
//Vehicle Rental System

#include "Employee.h"
class Admin : public Employee
{
protected:
	char Admin_Division[50];
	int Admin_ID;
	int contactNo;	

public:
	Admin(const char Employee_User_Name[], int EmployeeID, const char AdminDivision[], int AdminID, const char Employee_Address[], int Employee_contactNo, const char Employee_email[]);
	void Manage_User_Accounts();
	void Document_Requirements();
	void store_reports(const char* reports);
	void Manage_User_Info(int js_id);
	void Manage_User_Details(int j_id);
	void Manage_Company_Info(const char* c_name, int c_id);
	void Manage_Resumes(const char* resumeName);
	~Admin();

};

