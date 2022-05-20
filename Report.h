#include "Reservation.h"
#include "Vehicle.h"
class Reports
{
private:
	int reportNo;
public:
	Reports(int rNo);
	void genarateFinancialReport(Reservation* r);
	void genarateVehicalReport(Vehicle* v);
	void displayFinalReport();
	void displayVehicalReport();
	~Reports();
};
