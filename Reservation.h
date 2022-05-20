//IT21283062
//L.K.N.De Silva
//MLB_05.01_12
//Vehicle Rental System



#pragma once
class Reservation
{
protected:
    int Reservation_ID;
    char Vehicle_Type[1];
    double total_Payment;

public:
    Reservation();
    Reservation(int id, char vehiType[], double totalPayment);
    double cal_amount();
    void display_reservation();
    double get_discount();
    double get_total();
    ~Reservation();

};

