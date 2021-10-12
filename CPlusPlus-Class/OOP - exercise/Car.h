#pragma once
#include <string>
class Car
{
private:
	std::string brand;

	std::string style;

	int horsePower;


public:

	Car(std::string brand, std::string style, int horsePower);

	std::string getBrand() { return brand; }
	void setBrand(std::string brand_) {
		brand = brand_; 
	}

	std::string getStyle() { return style; }
	void setStyle(std::string style_) { style = style_; }

	int getPower() { return horsePower; }
	void setPower(int horsePower_) { horsePower = horsePower_; }


	std::string toString();


};

