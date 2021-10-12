#include "Point.h"
#include <iostream>


Point::Point()
{
	//set to origin as startup
	x_ = y_ = 0;
}
Point::Point(double x, double y) {
	this->x_ = x;
	this->y_ = y;

}




void Point::afficher()
{
	std::cout << "x = " << x_ << "| y = " << y_ << std::endl;
}

void Point::saisir()
{
	std::cout << "veuillez inserez les nouvelles coordonées x du point" << std::endl;

	std::cin >> x_;

	std::cout << "veuillez inserez les nouvelles coordonées y du point" << std::endl;

	std::cin >> y_;

}

int Point::distanceTo(Point destination)
{
	return sqrt((destination.x_ - x_) * (destination.x_ - x_) + (destination.y_ - y_) * (destination.y_ - y_));
}

Point Point::middleOf(Point from, Point to)
{
	Point middle;
	0.5*middle.x_ + x_;
	0.5 * middle.y_ + y_;
	middle.x_ = 0.5 * (from.x_ + to.x_);
	return Point();
}


Point Point::operator+(Point a)
{
	Point middle = Point((a.x_ + this->x_) / 2 , (a.y_ + this->y_) / 2);
	
	return middle;
}
bool Point::operator<(Point a)
{

	float maDistance = sqrt(this->x_ * this->x_ + this->y_ * this->y_);
	float laDistance = sqrt(a.x_ * a.x_ + a.y_ * a.y_);

	return maDistance < laDistance;
}

