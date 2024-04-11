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



void truck::displayTowCap()
{
    cout << "\nTOW CAPACITY: " << towCap;
}
