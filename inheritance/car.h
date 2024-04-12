#pragma once
#include "vehicle.h"

#ifndef car_h
#define car_h

class car : public vehicle {

protected:
	int doorCount = 0;

public:
	int getDoorCount();
	void setDoorCount(int);
	void displayCarInfo();
};
#endif