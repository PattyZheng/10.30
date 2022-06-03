#include "Point.h"
#include<iostream>
using namespace std;

Point::Point()//有
{

}
Point::Point(int n)//有
{
	setCardPoint(n);
	saveCard(n);
}
void Point::setCardPoint(int p)//算有幾點(11 12 13 = 0.5)
{
	if (p > 10)
		CardPoint += 0.5;
	else
		CardPoint += p;
}
double Point::getCardPoint()//有
{
	return CardPoint;
}
void Point::saveCard(int c)//儲存拿到的卡
{
	playersCard[CardSum] = c;
}
void Point::toString()
{
	cout << "CardPoint: " << CardPoint << " , " << "CardSum: " << CardSum << endl;
}
void Point::plusCardPoint(int c)
{
	if (c % 13 + 1 > 10)
		CardPoint += 0.5;
	else
		CardPoint += c % 13 + 1;
}
