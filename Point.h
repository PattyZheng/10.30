#ifndef Point_H
#define Point_H

class Point
{
public:
    int playersCard[5];//�s���쪺�P
    double CardPoint = 0;//�I��
    int CardSum = 0;//�P��
    Point();
    Point(int);
    void setCardPoint(int);//�⦳�X�I
    double getCardPoint();
    void setCardSum();//�X�i�P
    int getCardSum();
    void saveCard(int);//�x�s���쪺�d
    int getCard();
    
};
#endif