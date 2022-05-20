//IT21270024
//Nupearachchige P. G. N.
//MLB_05.01_12
//Vehicle Rental System

class User
{
protected:
	char Name[50];
	int User_ID;
	char address[50];
	int contactNo;
	char email[50];
public:
	User();
	User(const char uName[], int uRegID, const char* u_address, int u_contactNo, const char* u_email);
	void setRideUserDetails(char add, int cNo, char uEmail);
	virtual void updateRideUserDetails();
	virtual void displayRideUserDetails();
	~User();
};

