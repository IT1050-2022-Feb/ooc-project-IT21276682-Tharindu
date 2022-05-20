
//IT21283062
//L.K.N.De Silva
//MLB_05.01_12
//Vehicle Rental System


#include "Vehicle.h"
#include <cstring>


Vehicle::Vehicle(int id, const char type[], const char availabilit_y[])
{
	vehicle_ID = id;
	strcpy(Vehicle_Type, type);
	strcpy(availability, availabilit_y);
}

void Vehicle::set_vehicle_ID(int vehicleid)
{
}

int Vehicle::get_vehicle_ID()
{
}

void Vehicle::display_vehicle_details()
{
}

void Vehicle::update_vehicle_details()
{
}

Vehicle::~Vehicle()
{
}
