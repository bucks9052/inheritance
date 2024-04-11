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
	cout << "\nAMOUNT OF CAR DOORS: " << doorCount;
}
