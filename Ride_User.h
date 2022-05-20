#include "User.h"

class Ride_User : public User
{
protected:
	int Ride_User_ID;
	int contactNo;
public:
	Ride_User(const char uName[], int RideUserID,int uRegID, const char* u_address, int u_contactNo, const char* u_email);
	void setRideUserDetails(const char* add, int cNo, const char* uEmail);
	virtual void updateRideUserDetails();
	virtual void displayRideUserDetails();
	~Ride_User();
};
