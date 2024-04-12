#include "car.h"
#include "vehicle.h"

int car::getDoorCount()
{
	return doorCount;
}

void car::setDoorCount(int dcount)
{
	doorCount = dcount;
}

void car::displayCarInfo()
{
	cout << "\nManufacturer: " << vehicle::getName();
	cout << "\nYear: " << vehicle::getProductionYear();
	cout << "\nNUMBER OF CAR DOORS: " << doorCount;
}
