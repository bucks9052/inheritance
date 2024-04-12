/*
Oliver Moore
CIS 1202
4/10/2024
*/

#include "car.h"
#include "personalLibv1.4.h"
#include "truck.h"
#include "vehicle.h"
#include <string>
#include "car.cpp"

int main() {
	vehicle vehicleData;
	truck truckData;
	car carData;
	int doors = 0;
	int vehicleYear = 0;
	int carYear = 0;
	int truckYear = 0;
	int towCap = 0;
	vehicleYear = validateInt("\nEnter year built: ");
	cin.clear();
	cin.ignore();
	string manufacturer;
	cout << "Enter manufacturer: ";
	getline(cin, manufacturer);
	cin.clear();
	vehicleData.setVehicleInfo(manufacturer, vehicleYear);
	vehicleData.displayVehicleInfo();
	carYear = validateInt("\nEnter year built: ");
	cin.clear();
	cin.ignore();
	cout << "Enter manufacturer: ";
	getline(cin, manufacturer);
	cin.clear();
	carData.car::setVehicleInfo(manufacturer, carYear);
	doors = validateInt("Enter door number: ");
	carData.car::setDoorCount(doors);
	carData.car::displayCarInfo();
	truckYear = validateInt("\nEnter year built: ");
	cin.clear();
	cin.ignore();
	cout << "Enter manufacturer: ";
	getline(cin, manufacturer);
	cin.clear();
	truckData.setVehicleInfo(manufacturer, truckYear);
	towCap = validateInt("Enter the towing capacity: ");
	truckData.setTowCap(towCap);
	truckData.displayTruckInfo();
	endProgram();
};
