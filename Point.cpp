#include "Point.h"
#include<iostream>
using namespace std;

Point::Point()//¦³
{
	CardPoint = 0;
	CardSum=0;
}
Point::Point(double n)//¦³
{
	CardPoint = n;
}

double Point::getCardPoint()//¦³
{
	return CardPoint;
}
void Point::plusCardPoint(int c)
{
	if (c % 13 + 1 > 10)
		CardPoint += 0.5;
	else
		CardPoint += c % 13 + 1;
}
