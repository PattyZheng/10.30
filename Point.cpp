#include "Point.h"

Point::Point() {

}
Point::Point(int n) {
	setCardPoint(n);
	setCardSum();
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

}
void Point::setCardSum() {//幾張牌
	CardSum++;
}
int Point::getCardSum() {

}
void Point::saveCard(int c) {//儲存拿到的卡
	playersCard[CardSum] = c;
}
int Point::getCard() {

}