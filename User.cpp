//IT21270024
//Nupearachchige P. G. N.
//MLB_05.01_12
//Vehicle Rental System

#include "User.h"
#include <cstring>

User::User()
{
	strcpy(Name, "");
	User_ID = 0;
	strcpy(address, "");
	contactNo = 0;
	strcpy(email, "");
}

User::User(const char uName[], int uRegID, const char* u_address, int u_contactNo, const char* u_email)
{
	strcpy(Name, uName);
	User_ID = uRegID;
	strcpy(address, u_address);
	contactNo = u_contactNo;
	strcpy(email, u_email);
}

void User::setRideUserDetails(char add, int cNo, char uEmail)
{
}

void User::updateRideUserDetails()
{
}

void User::displayRideUserDetails()
{
}

User::~User()
{
}

