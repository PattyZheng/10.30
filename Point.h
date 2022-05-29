#ifndef Point_H
#define Point_H

class Point
{
private:
    static double CardPoint;
    static int CardSum;
public:
    Point();
    Point(int);
    double getCardPoint();
    int getCardSum();
};
#endif