#ifndef Point_H
#define Point_H

class Point//夢安負責
{
private:
    double CardPoint;//玩家抽到牌的分數，幾點(10.5)
public:
    Point();
    Point(double);
    void plusCardPoint(int c);//計算點數
    double getCardPoint();//取得點數
    
};
#endif