#include "Point.h"

Point::Point() {

}
Point::Point(int n) {
	setCardPoint(n);
	setCardSum();
	saveCard(n);
}
void Point::setCardPoint(int p) {//�⦳�X�I(11 12 13 = 0.5)
	if (p > 10) {
		CardPoint += 0.5;
	}
	else
		CardPoint += p;
}
double Point::getCardPoint() {

}
void Point::setCardSum() {//�X�i�P
	CardSum++;
}
int Point::getCardSum() {

}
void Point::saveCard(int c) {//�x�s���쪺�d
	playersCard[CardSum] = c;
}
int Point::getCard() {

}