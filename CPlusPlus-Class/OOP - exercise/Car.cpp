#include "Car.h"

Car::Car(std::string brand_, std::string style_, int horsePower_)
{
	this->brand = brand_;
	this->style = style_;
	this->horsePower = horsePower_;

}

std::string Car::toString()
{
	return "the car is a " + brand + " " + style + " and has " + std::to_string(horsePower) + " horse power";

}
