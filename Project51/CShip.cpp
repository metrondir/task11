#include "CShip.h"
#include <iostream>
CShip::CShip() {
	Date = "0000-00-00";
	Price = 0;
	Speed = 0;

	x = 0;
	y = 0;
	z = 0;
	NumberOfPassengers = 0;
	PortOfRegestration = 'port';
}

CShip::~CShip()
{
}



void CShip::SetDate(std::string value) {
	Date = value;
}
void CShip::SetPrice(int value) {
	Price = value;
}
void CShip::SetSpeed(int value) {
	Speed = value;
}
void CShip::SetX(int value) {
	x = value;
}
void CShip::SetY(int value) {
	y = value;
}
void CShip::SetZ(int value) {
	z = value;
}

void CShip::SetNumberOfPassengers(int value) {
	NumberOfPassengers = value;
}
void CShip::SetPortOfRegestration(std::string value) {
	PortOfRegestration = value;
}

std::string CShip::GetDate() {
	return Date;
}

int CShip::GetPrice() {
	return Price;
}
int CShip::GetSpeed() {
	return Speed;
}
int CShip::GetX() {
	return x;
}
int CShip::GetY() {
	return y;
}
int CShip::GetZ() {
	return z;
}
int CShip::GetNumberOfPassengers() {
	return NumberOfPassengers;
}
std::string CShip::GetPortOfRegestration() {
	return PortOfRegestration;
}

CShip::CShip(int price, int speed, std::string date, int x1, int y1, int z1, std::string portOfregestration,int numberOfPassengers)
{
	Price = price;
	Speed = speed;
	Date = date;
	x = x1;
	y = y1;
	z = z1;
	PortOfRegestration = portOfregestration;
	NumberOfPassengers = numberOfPassengers;

}

void CShip::show_details()
{
	std::cout << "price of the ship: " << Price << "\n";
	std::cout << "speed of the ship: " << Speed << "\n";
	std::cout << "date of the ship: " << Date << "\n";
	std::cout << "x-coordinate of the ship: " << x << "\n";
	std::cout << "y-coordinate of the ship: " << y << "\n";
	std::cout << "z-coordinate of the ship: " << z << "\n";
	std::cout << "ship's port of registration: " << PortOfRegestration << "\n";
	std::cout << "NumberOfPassengers: " << NumberOfPassengers << "\n";

}