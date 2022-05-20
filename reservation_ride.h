//IT21283062
//L.K.N.De Silva
//MLB_05.01_12
//Vehicle Rental System



#include "Reservation.h"

//class and methods for ride user reservation

class Reservation_Ride : public Reservation
{
private:
    int Reservation_ID;
    char Vehicle_Type[1];
    double distance;
    double Amount_ride;
    double ride_discount;
    double ride_total;

public:
    Reservation_Ride(int id, int rideDistance, const char vehiType[]);
    double cal_rideAmount();
    void display_Reservation();
    double get_discount();
    double get_total();
    ~Reservation_Ride();


};
