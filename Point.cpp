#include "Point.h"
#include<iostream>
using namespace std;

Point::Point()
{
	CardPoint = 0;
}
Point::Point(double n)
{
	CardPoint = n;
}
void Point::plusCardPoint(int c)
{
	if (c % 13 + 1 > 10) // J Q K Âà´«
		CardPoint += 0.5;
	else
		CardPoint += c % 13 + 1;
}
double Point::getCardPoint()
{
	return CardPoint;
}

