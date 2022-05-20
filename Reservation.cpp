
//IT21283062
//L.K.N.De Silva
//MLB_05.01_12
//Vehicle Rental System

#include "Reservation.h"
#include <cstring>

Reservation::Reservation()
{
}

//constructor with parameters
Reservation::Reservation(int id, char vehiType[], double totalPayment)
{
	Reservation_ID = id;
	strcpy(Vehicle_Type, vehiType);
	total_Payment = totalPayment;
}

double Reservation::cal_amount()
{

}

void Reservation::display_reservation()
{
}

double Reservation::get_discount()
{

}

double Reservation::get_total()
{

}

Reservation::~Reservation()
{
}
