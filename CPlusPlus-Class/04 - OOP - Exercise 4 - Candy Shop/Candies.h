#pragma once
#include <string>
#include <iostream>
class Candies
{

public:



	enum class CandyType {
		Dragibus,
		Sucette,
		Reglisse,
		Fraise

	};
	static std::string getEnumName(CandyType type) {
		switch (type)
		{
		case Candies::CandyType::Dragibus:
			return "dragibus";
			break;
		case Candies::CandyType::Sucette:
			return "sucette";
			break;
		case Candies::CandyType::Reglisse:
			return "reglisse";
			break;
		case Candies::CandyType::Fraise:
			return "fraise";
			break;
		default:
			return "undefined";
			break;
		}
	}


private:
	CandyType type_;

	int candyQty_;

public:
	Candies();
	Candies(CandyType newType, int quantity);
	void buyCandies(int qtyToBuy);

	CandyType getType() { return type_; };
	int getQty() { return candyQty_; }





};

