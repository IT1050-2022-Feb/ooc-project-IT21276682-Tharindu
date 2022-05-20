//IT21276682
//R.M.T.B.Rathnayake
//MLB_05.01_12
//Vehicle Rental System


#include "Employee.h"
class Customer_Care : public Employee
{
protected:
	char Customer_Care_Division[50];
	int Customer_Care_ID;
	int contactNo;

public:

	Customer_Care(const char Employee_User_Name[], const char Employee_Address[], const char CustomerCareDivision[], int CustomerCareID, int Help_contactNo, const char Employee_email[]);
	void setUserDetails(const char Username[], int User_ID, int contact, const char eMail[]);
	void updateUserDetails(const char Username[], int User_ID, int contact, const char eMail[]);
	char getUserDetails(const char Username[], int User_ID, int contact, const char eMail[]);
	void Set_reservation_ID(int reservation);
	int Get_reservation_ID(int reservation);
	double Cal_Amount(double Price);
	~Customer_Care();
};

