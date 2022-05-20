#include "Ride_User.h"
#include <cstring>



Ride_User::Ride_User(const char uName[], int RideUserID, int uRegID, const char* u_address, int u_contactNo, const char* u_email)
{
	strcpy(Name, uName);
	Ride_User_ID = RideUserID;
	User_ID = uRegID;
	strcpy(address, u_address);
	contactNo = u_contactNo;
	strcpy(email, u_email);
}

void Ride_User::setRideUserDetails(const char* add, int cNo, const char* uEmail)
{
}
void Ride_User::updateRideUserDetails()
{
}
void Ride_User::displayRideUserDetails()
{
}
Ride_User::~Ride_User()
{
}
