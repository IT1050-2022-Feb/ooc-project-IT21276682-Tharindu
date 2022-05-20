#include "Rent_User.h"
#include <cstring>


Rent_User::Rent_User(const char uName[], int RentUserID, int uRegID, const char* u_address, int u_contactNo, const char* u_email)
{
	strcpy(Name, uName);
	Rent_User_ID = RentUserID;
	User_ID = uRegID;
	strcpy(address, u_address);
	contactNo = u_contactNo;
	strcpy(email, u_email);
}

void Rent_User::setRentUserDetails(const char* add, int cNo, const char* uEmail)
{
}
void Rent_User::displayRentUserDetails()
{
}
void Rent_User::updateRentUserDetails()
{
}
Rent_User::~Rent_User()
{
}
