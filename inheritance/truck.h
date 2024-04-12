#pragma once
#include "vehicle.h"

#ifndef truck_h
#define truck_h

class truck : public vehicle {

protected:
	int towCap = 0;

public:
	int getTowCap();
	void setTowCap(int);
	void displayTruckInfo();
};
#endif