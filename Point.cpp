#include "Point.h"
#include<iostream>
using namespace std;
Point::Point() {

}
Point::Point(int n) {
	setCardPoint(n);
	plusCardSum();
	saveCard(n);
}
void Point::setCardPoint(int p) {//算有幾點(11 12 13 = 0.5)
	if (p > 10) {
		CardPoint += 0.5;
	}
	else
		CardPoint += p;
}
double Point::getCardPoint() {
	return CardPoint;
}
void Point::plusCardSum() {//幾張牌
	CardSum++;
}
int Point::getCardSum() {
	return CardSum;
}
void Point::saveCard(int c) {//儲存拿到的卡
	playersCard[CardSum] = c;
}
int Point::getCard() {
	return 0;
}
void Point::toString() {
	cout << "CardPoint: " << CardPoint << " , " << "CardSum: " << CardSum << endl;
}
void Point::plusCardPoint(int c)
{
	if (c % 13 + 1 > 10)
		CardPoint += 0.5;
	else
		CardPoint += c % 13 + 1;
}
