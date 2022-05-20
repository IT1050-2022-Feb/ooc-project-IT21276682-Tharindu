//IT21276682
//R.M.T.B.Rathnayake
//MLB_05.01_12
//Vehicle Rental System


#include "Employee.h"
class Manager : public Employee
{
protected:
	char Manager_Division[50];
	int Manager_ID;
	int contactNo;

public:
	Manager(const char Employee_User_Name[], int EmployeeID, const char ManagerDivision[], int ManagerID, const char Employee_Address[], int Employee_contactNo, const char Employee_email[]);
	void Manage_User_Accounts();
	void approve_payment();
	void Generating_reports();
	void Monitoring_Vehicle_Activity();
	void Review_reports(const char* reports);
	void Manage_User_Details(int j_id);
	void Manage_Company_Details(const char* c_name, int c_id);
	void Manage_Resumes(const char* resumeName);
	~Manager();
};

