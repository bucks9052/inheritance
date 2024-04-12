#include "vehicle.h"

void vehicle::setVehicleInfo(string n, int prod)
{
	name = n;
	productionYear = prod;
}

void vehicle::displayVehicleInfo()
{
	cout << "\nNAME: " << name;
	cout << "\nPRODUCTION YEAR: " << productionYear;
}

string vehicle::getName()
{
	return name;
}

int vehicle::getProductionYear()
{
	return productionYear;
}
