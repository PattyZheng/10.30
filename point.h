#ifndef Point_H
#define Point_H

class Point
{
public:
    int playersCard[5];//�s���쪺�P
    double CardPoint;//�I��
    int CardSum;//�P��
    Point();
    Point(double);
    double getCardPoint();//��
    void plusCardPoint(int c);
};
#endif