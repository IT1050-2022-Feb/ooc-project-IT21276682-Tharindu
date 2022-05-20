#include "Reservation.h"

//class and method for rent user reservation

class Reservation_Rent : public Reservation
{
private:
    int Reservation_ID;
    int No_Of_Days;
    char Vehicle_Type[1];
    char Driver_status[3];
    double Amount_rent;
    double rent_discount;
    double rent_total;

public:
    Reservation_Rent(int id, int numOfDays, const char vehiType[], const char driver[]);
    double cal_amount();
    void display_reservation();
    double get_discount();
    double get_total();
    ~Reservation_Rent();

};
