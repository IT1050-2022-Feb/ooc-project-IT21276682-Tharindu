//it21276996
//W.Y.M.Fernando
//MLB_05.01_12
//Vehicle Rental System



#include "Payment.h"
#include <string.h>

payment::payment(int id, double total ,const char c_type[], const char email[], const char cardHolder[])

{
	payemnt_Id = id;
	Total = total;
	strcpy(card_Type, c_type);
	strcpy(user_email, email);
	strcpy(card_Holder, cardHolder);
}

double payment::set_total(double total)
{
}

double payment::get_total()
{
}

double payment::display_payment()
{
}

payment::~payment()
{
}

