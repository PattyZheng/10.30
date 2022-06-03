#ifndef Point_H
#define Point_H

class Point
{
public:
    int playersCard[5];//存拿到的牌
    double CardPoint;//點數
    int CardSum;//牌數
    Point();
    Point(double);
    double getCardPoint();//有
    void plusCardPoint(int c);
};
#endif