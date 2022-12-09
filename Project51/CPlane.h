#include "CVehicle.h"
#pragma once
class CPlane : public CVehicle
{
	int Height, NumberOfPassengers;
public:
	CPlane();
	~CPlane();

	void SetHeight(int value);
	void SetNumberOfPassengers(int value);

	int GetHeight();
	int GetNumberOfPassengers();

	CPlane(int price, int speed, std::string date, int x1, int y1, int z1,int height,int numberofpassengers);

	void show_details();

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
};

