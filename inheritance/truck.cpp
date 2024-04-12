#include "truck.h"
#include "vehicle.h"

int truck::getTowCap()
{
    return towCap;
}

void truck::setTowCap(int tow)
{
    towCap = tow;
}



void truck::displayTruckInfo()
{
    cout << "\nManufacturer: " << vehicle::getName();
    cout << "\nYear: " << vehicle::getProductionYear();
    cout << "\nTOW CAPACITY: " << towCap;
}
