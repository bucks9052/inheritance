#include "vehicle.h"

void vehicle::set(string n, int prod)
{
	name = n;
	productionYear = prod;
}

void vehicle::displayInfo()
{
	cout << "\nNAME: " << name;
	cout << "PRODUCTION YEAR: " << productionYear;
}

string vehicle::getName()
{
	return name;
}

int vehicle::getProductionYear()
{
	return productionYear;
}
