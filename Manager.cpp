#include "Manager.h"
#include <cstring>
//constructor with parameters

Manager::Manager(const char Employee_User_Name[], int EmployeeID, const char ManagerDivision[], int ManagerID, const char Employee_Address[], int Employee_contactNo, const char Employee_email[])
{
	strcpy(Manager_Division, ManagerDivision);
	Manager_ID = ManagerID;
	contactNo = Employee_contactNo;
}

void Manager::Manage_User_Accounts()
{
}

void Manager::approve_payment()
{
}

void Manager::Generating_reports()
{
}

void Manager::Monitoring_Vehicle_Activity()
{
}

void Manager::Review_reports(const char* reports)
{
}

void Manager::Manage_User_Details(int j_id)
{
}

void Manager::Manage_Company_Details(const char* c_name, int c_id)
{
}

void Manager::Manage_Resumes(const char* resumeName)
{
}

Manager::~Manager()
{
}


