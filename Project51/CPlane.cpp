#include "CPlane.h"
#include <iostream>
CPlane::CPlane() {
	Date = "0000-00-00";
	Price = 0;
	Speed = 0;

	x = 0;
	y = 0;
	z = 0;
	Height = 0;
	NumberOfPassengers = 0;
}

CPlane::~CPlane()
{
}

void CPlane::SetDate(std::string value) {
	Date = value;
}
void CPlane::SetPrice(int value) {
	Price = value;
}
void CPlane::SetSpeed(int value) {
	Speed = value;
}
void CPlane::SetX(int value) {
	x = value;
}
void CPlane::SetY(int value) {
	y = value;
}
void CPlane::SetZ(int value) {
	z = value;
}
void CPlane::SetHeight(int value) {
	Height = value;
}
void CPlane::SetNumberOfPassengers(int value) {
	NumberOfPassengers = value;
}

std::string CPlane::GetDate() {
	return Date;
}
int CPlane::GetPrice() {
	return Price;
}
int CPlane::GetSpeed() {
	return Speed;
}
int CPlane::GetX() {
	return x;
}
int CPlane::GetY() {
	return y;
}
int CPlane::GetZ() {
	return z;
}
int CPlane::GetHeight() {
	return Height;
}
int CPlane::GetNumberOfPassengers() {
	return NumberOfPassengers;
}
CPlane::CPlane(int price, int speed, std::string date, int x1, int y1, int z1, int height, int numberofpassengers) {
	Price = price;
	Speed = speed;
	Date = date;
	x = x1;
	y = y1;
	z = z1;
	Height = height;
	NumberOfPassengers = numberofpassengers;
}
void CPlane::show_details() {
	std::cout << "priceof the plane: " << Price << "\n";
	std::cout << "speed of the plane: " << Speed << "\n";
	std::cout << "date of the plane: " << Date << "\n";
	std::cout << "x-coordinate of the plane: " << x << "\n";
	std::cout << "y-coordinate of the plane: " << y << "\n";
	std::cout << "z-coordinate of the plane: " << z << "\n";
	std::cout << "Height of the plane: " << Height << "\n";
	std::cout << "Number Of Passengers on plane: " << NumberOfPassengers << "\n";
}