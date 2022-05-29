#include "Point.h"
int Point::CardSum = 0;
double Point::CardPoint = 0;

Point::Point() {

}
Point::Point(int c) {
	CardPoint = c;
}
double Point::getCardPoint() {
	return CardPoint;
}
int Point::getCardSum() {
	return CardSum;
}