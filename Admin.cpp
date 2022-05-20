//IT21276682
//R.M.T.B.Rathnayake
//MLB_05.01_12
//Vehicle Rental System

#include "Admin.h"
#include <cstring>

//constructor with parameters

Admin::Admin(const char Employee_User_Name[], int EmployeeID, const char AdminDivision[], int AdminID, const char Employee_Address[], int Employee_contactNo, const char Employee_email[])
{
	strcpy(Admin_Division, AdminDivision);
	strcpy(Employee_Name, Employee_User_Name);
	Admin_ID = AdminID;
	Employee_ID = EmployeeID;
	contactNo = Employee_contactNo;
	strcpy(address, Employee_Address);
	strcpy(email, Employee_email);
}
void Admin::Manage_User_Accounts()
{
}

void Admin::Document_Requirements()
{
}

void Admin::store_reports(const char* reports)
{
}

void Admin::Manage_User_Info(int js_id)
{
}

void Admin::Manage_User_Details(int j_id)
{
}

void Admin::Manage_Company_Info(const char* c_name, int c_id)
{
}

void Admin::Manage_Resumes(const char* resumeName)
{
}

Admin::~Admin()
{
}
