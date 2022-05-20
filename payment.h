//it21276996
//W.Y.M.Fernando
//MLB_05.01_12
//Vehicle Rental System
#pragma once
class payment
{
protected:
    int payemnt_Id;
    double Total;
    char card_Type[4];
    char user_email[50];
    char card_Holder[50];

public:
    payment(int id, double total, const char c_type[], const char email[], const char cardHolder[]);
    double set_total(double total);
    double get_total();
    double display_payment();
    ~payment();


};
