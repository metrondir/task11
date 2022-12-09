#include "CCar.h"
#include "CPlane.h"
#include "CShip.h"
#include "CVehicle.h"
#include <iostream>

using std::cin;
using std::cout;

int main() {
	unsigned int choose=4;
	cout << "Write 0: to exit, 1:to create car, 2: to create plane, 3: to create ship: ";

	while (choose > 0) {

	cin >> choose;
	switch (choose)
	{

	case 1: {
		int nCar, priceCar, speedCar, xCar, yCar, zCar;
		std::string dateCar;
		std::cout << "Write the number of car: ";
		std::cin >> nCar;
		CCar** car;
		car = (CCar**)malloc(nCar * sizeof(CCar*));
		for (int i = 0; i < nCar; ++i)
		{
			std::cout << "Write price the of car: ";
			std::cin >> priceCar;
			std::cout << "Write the speed of car: ";
			std::cin >> speedCar;
			std::cout << "Write date of car: ";
			std::cin >> dateCar;
			std::cout << "Write down the x coordinates of the car: ";
			std::cin >> xCar;
			std::cout << "Write down the y coordinates of the car: ";
			std::cin >> yCar;
			std::cout << "Write down the z coordinates of the car: ";
			std::cin >> zCar;
			car[i] = new CCar(priceCar, speedCar, dateCar, xCar, yCar, zCar);

		}
		for (int i = 0; i < nCar; i++) {
			car[i]->show_details();
		}
		for (int i = 0; i < nCar; i++) free(car[i]);
		free(car);
		break;
		}
	case 2: {

		
		int nPlane, pricePlane, speedPlane, xPlane, yPlane, zPlane , heightPlane, numberOfPassengersPlane;
		std::string datePlane;
		std::cout << "Write the number of plane: ";
		std::cin >> nPlane;
		CPlane** plane;
		plane = (CPlane**)malloc(nPlane * sizeof(CPlane*));
		for (int i = 0; i < nPlane; ++i)
		{
			std::cout << "Write the price of plane: ";
			std::cin >> pricePlane;
			std::cout << "Write the speed of plane: ";
			std::cin >> speedPlane;
			std::cout << "Write date of plane: ";
			std::cin >> datePlane;
			std::cout << "Write down the x coordinates of the plane: ";
			std::cin >> xPlane;
			std::cout << "Write down the y coordinates of the plane: ";
			std::cin >> yPlane;
			std::cout << "Write down the z coordinates of the plane: ";
			std::cin >> zPlane;
			std::cout << "Write the height of the plane: ";
			std::cin >> heightPlane;
			std::cout << "Write the number of passengers in plane: ";
			std::cin >> numberOfPassengersPlane;
			plane[i] = new CPlane(pricePlane, speedPlane, datePlane, xPlane, yPlane, zPlane, heightPlane, numberOfPassengersPlane);

		}
		for (int i = 0; i < nPlane; i++) {
			plane[i]->show_details();
		}
		for (int i = 0; i < nPlane; i++) free(plane[i]);
		free(plane);
	}
	case 3: {
	int nShip, priceShip, speedShip, xShip, yShip, zShip, numberOfPassengersShip;
	std::string dateShip;
	std::string portofregistration;
	std::cout << "Write the number of ships: ";
	std::cin >> nShip;
	CShip** ship;
	ship = (CShip**)malloc(nShip * sizeof(CShip*));
	for (int i = 0; i < nShip; ++i)
	{
		std::cout << "Write the price of ship: ";
		std::cin >> priceShip;
		std::cout << "Write the speed of ship: ";
		std::cin >> speedShip;
		std::cout << "Write date of ship: ";
		std::cin >> dateShip;
		std::cout << "Write down the x coordinates of the ship: ";
		std::cin >> xShip;
		std::cout << "Write down the y coordinates of the ship: ";
		std::cin >> yShip;
		std::cout << "Write down the z coordinates of the ship: ";
		std::cin >> zShip;
		std::cout << "Write the ship's port of registry: ";
		std::cin >> portofregistration;
		std::cout << "Write the number of passengers in ship: ";
		std::cin >> numberOfPassengersShip;
		ship[i] = new CShip(priceShip, speedShip, dateShip, xShip, yShip, zShip, portofregistration, numberOfPassengersShip);

	}
	for (int i = 0; i < nShip; i++) {
		ship[i]->show_details();
	}
	for (int i = 0; i < nShip; i++) free(ship[i]);
	free(ship);
	}
	default:
		cout << "exit";
	}
	}
}