#include "CVehicle.h"
#pragma once
class CCar : public CVehicle
{
public:
	CCar();
	~CCar();

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
	CCar(int price, int speed, std::string date, int x, int y, int z);
	void show_details();
};


