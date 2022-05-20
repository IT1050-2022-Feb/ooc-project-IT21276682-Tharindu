
//IT21283062
//L.K.N.De Silva
//MLB_05.01_12
//Vehicle Rental System

// class and methods for vehicles

class Vehicle
{
private:
    int vehicle_ID;
    char Vehicle_Type[5];
    char availability[3];


public:
    Vehicle(int id, const char type[], const char availabilit_y[]);
    void set_vehicle_ID(int vehicleid);
    int get_vehicle_ID();
    void display_vehicle_details();
    void update_vehicle_details();
    ~Vehicle();
};
