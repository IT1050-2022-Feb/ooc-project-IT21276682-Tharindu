//IT21283062
//L.K.N.De Silva
//MLB_05.01_12
//Vehicle Rental System

#include "Reservation_Ride.h"
#include<string.h>

Reservation_Ride::Reservation_Ride(int id, int rideDistance, const char vehiType[])
{
	Reservation_ID = id;
	distance = rideDistance;
	strcpy(Vehicle_Type, vehiType);
}

double Reservation_Ride::cal_rideAmount()
{
}

void Reservation_Ride::display_Reservation()
{
}

double Reservation_Ride::get_discount()
{
}

double Reservation_Ride::get_total()
{
}

Reservation_Ride::~Reservation_Ride()
{
}
