
//IT21283062
//L.K.N.De Silva
//MLB_05.01_12
//Vehicle Rental System

#include "Reservation_Rent.h"
#include <string.h>

Reservation_Rent::Reservation_Rent(int id, int numOfDays, const char vehiType[], const char driver[])
{
    Reservation_ID = id;
    No_Of_Days = numOfDays;
    strcpy(Vehicle_Type, vehiType);
    strcpy(Driver_status, driver);
}

double Reservation_Rent::cal_amount()
{
}

void Reservation_Rent::display_reservation()
{
}

double Reservation_Rent::get_discount()
{
}

double Reservation_Rent::get_total()
{
}

Reservation_Rent::~Reservation_Rent()
{
}
