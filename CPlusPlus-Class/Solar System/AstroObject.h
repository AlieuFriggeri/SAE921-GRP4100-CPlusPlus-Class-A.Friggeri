#pragma once
#include <string>

class AstroObject
{
	std::string name_;
	int diameter_;
	int weight_;
	int distanceFromSun_;
public:
	AstroObject(std::string name, int diameter, int weight, int distanceFromSun)
	{
		this->diameter_ = diameter;
		this->distanceFromSun_ = distanceFromSun;
		this->name_ = name;
		this->weight_ = weight;
	}



};

