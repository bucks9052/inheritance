#pragma once
#ifndef vehicle_h
#define vehicle_h



#include <string>
#include <iostream>

using namespace std;

class vehicle {

protected:
	string name;
	int productionYear = 0;

public:
	void setVehicleInfo(string, int);
	void displayVehicleInfo();
	string getName();
	int getProductionYear();


};
#endif