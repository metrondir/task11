#include "CCar.h"
#include <iostream>

CCar::CCar() {
	Date="0000-00-00";
	Price = 0;
	Speed= 0;

	x = 0;
	y = 0;
	z = 0;
}

CCar::~CCar()
{
}

void CCar::SetDate(std::string value) {
	Date = value;
}
void CCar::SetPrice(int value) {
	Price = value;
}
void CCar::SetSpeed(int value) {
	Speed = value;
}
void CCar::SetX(int value) {
	x = value;
}
void CCar::SetY(int value) {
	y = value;
}
void CCar::SetZ(int value) {
	z = value;
}

std::string CCar::GetDate() {
	return Date;
}
int CCar::GetPrice() {
	return Price;
}
int CCar::GetSpeed() {
	return Speed;
}
int CCar::GetX() {
	return x;
}
int CCar::GetY() {
	return y;
}
int CCar::GetZ() {
	return z;
}
CCar::CCar(int price, int speed, std::string date, int x1, int y1, int z1) {
	Price = price;
	Speed = speed;
	Date = date;
	x = x1;
	y = y1 ;
	z = z1;
}
void CCar::show_details() {
	std::cout << "price of the car: " << Price << "\n";
	std::cout << "speed of the car: " << Speed << "\n";
	std::cout << "date of the car: " << Date << "\n";
	std::cout << "x-coordinate of the car: " << x << "\n";
	std::cout << "y-coordinate of the car: " << y << "\n";
	std::cout << "z-coordinate of the car: " << z << "\n";
}