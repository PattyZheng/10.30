#ifndef Point_H
#define Point_H

class Point
{
public:
    int playersCard[5];
    double CardPoint;
    int CardSum;
    Point();
    Point(double);
    double getCardPoint();
    void plusCardPoint(int c);
};
#endif