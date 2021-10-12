#include "Candies.h"




Candies::Candies()
{
	candyQty_ = 0;

}
Candies::Candies(CandyType newType, int quantity)
{
	this->type_ = newType;
	this->candyQty_ = quantity;
}

void Candies::buyCandies(int qtyToBuy)
{
	
		if (qtyToBuy < candyQty_) {
			candyQty_ -= qtyToBuy;
		}
		else
		{
			std::cout << "there is not enough candies to buy this much" << std::endl;
			std::cout << "there is " << candyQty_ << " left to buy" << std::endl;
			std::cout << "now the bag is empty" << std::endl;
			candyQty_ = 0;
		}
	
}
