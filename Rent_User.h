//IT21270024
//Nupearachchige P. G. N.
//MLB_05.01_12
//Vehicle Rental System

#include "User.h"

class Rent_User : public User
{
protected:
	int Rent_User_ID;
	int contactNo;
public:
	Rent_User(const char uName[], int RentUserID, int uRegID, const char* u_address, int u_contactNo, const char* u_email);
	void setRentUserDetails(const char* add, int cNo, const char* uEmail);
	void updateRentUserDetails();
	void displayRentUserDetails();
	~Rent_User();
};

