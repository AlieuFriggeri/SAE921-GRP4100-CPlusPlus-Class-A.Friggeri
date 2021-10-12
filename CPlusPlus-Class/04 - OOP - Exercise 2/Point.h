#pragma once
class Point
{
public:
	double x_, y_;



	Point();
	Point(double x, double y);

	void deplace(double dx, double dy);
	void afficher();
	void saisir();
	int distanceTo(Point destination);
	Point middleOf(Point from, Point to);

	Point operator+(Point a);
	bool operator<(Point a);


};

