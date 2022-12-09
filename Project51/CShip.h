#include "CVehicle.h"
#include <string>
#pragma once
class CShip : public CVehicle
{
	int NumberOfPassengers;
	std::string PortOfRegestration;
public:
	CShip();
	~CShip();

	void SetPortOfRegestration(std::string value);
	void SetNumberOfPassengers(int value);
	int GetNumberOfPassengers();
	std::string GetPortOfRegestration();

	void SetPrice(int value);
	void SetSpeed(int value);
	void SetDate(std::string value);
	void SetX(int value);
	void SetY(int value);
	void SetZ(int value);

	int GetPrice();
	int GetSpeed();
	std::string GetDate();
	int GetX();
	int GetY();
	int GetZ();

	CShip(int price, int speed, std::string date, int x1, int y1, int z1, std::string portOfregestration, int numberOfPassengers);

	void show_details();
};

