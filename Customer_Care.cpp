#include "Customer_Care.h"
#include <cstring>



Customer_Care::Customer_Care(const char Employee_User_Name[], const char Employee_Address[], const char CustomerCareDivision[], int CustomerCareID, int Help_contactNo, const char Employee_email[])
{
	strcpy(Customer_Care_Division, CustomerCareDivision);
	Customer_Care_ID = CustomerCareID;
	contactNo = Help_contactNo;
}

void Customer_Care::setUserDetails(const char Username[], int User_ID, int contact, const char eMail[])
{
}
void Customer_Care::updateUserDetails(const char Username[], int User_ID, int contact, const char eMail[])
{
}
char Customer_Care::getUserDetails(const char Username[], int User_ID, int contact, const char eMail[])
{
}
void Customer_Care::Set_reservation_ID(int reservation)
{
}
int Customer_Care::Get_reservation_ID(int reservation)
{
}
double Customer_Care::Cal_Amount(double Price)
{
}
Customer_Care::~Customer_Care()
{
}
