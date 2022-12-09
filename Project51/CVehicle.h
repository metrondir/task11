#pragma once
#include <string>
class CVehicle
{
protected:
	int x, y, z, Price, Speed;
	std::string Date;
public:
	CVehicle();
	~CVehicle();

	virtual void SetPrice(int value) = 0;
	virtual void SetSpeed(int value) = 0;
	virtual void SetDate(std::string value) = 0;
	virtual void SetX(int value) = 0;
	virtual void SetY(int value) = 0;
	virtual void SetZ(int value) = 0;

	virtual int GetPrice() = 0;
	virtual int GetSpeed() = 0;
	virtual std::string GetDate() = 0;
	virtual int GetX() = 0;
	virtual int GetY() = 0;
	virtual int GetZ() = 0;
};

