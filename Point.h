#ifndef Point_H
#define Point_H

class Point
{
public:
    int playersCard[5];//存拿到的牌
    double CardPoint = 0;//點數
    int CardSum = 0;//牌數
    Point();
    Point(int);
    void setCardPoint(int);//算有幾點
    double getCardPoint();//有
    void saveCard(int);//儲存拿到的卡
    void toString();
    void plusCardPoint(int c);
};
#endif