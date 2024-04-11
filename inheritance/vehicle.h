#pragma once
#ifndef vehicle_h
#define vehicle_h
#include "personalLibv1.4.h"
class vehicle {
protected:
	string name;
	int productionYear = 0;

public:
	void set(string, int);
	void displayInfo();
	string getName();
	int getProductionYear();


};
#endif