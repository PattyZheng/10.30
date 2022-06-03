#include <string>
#include "Point.h"
using namespace std;
#ifndef Player_H
#define Player_H

class Player
{
private:
    string name;
    int PlayerSum=0;
    Point point;
    int playerCard[5];
public:
    Player();
    Player(string, int ,Point);//名字,總分
    void setName(string);
    string getName();//有
    void plusPlayerSum();//有
    int getPlayerSum();//有
    void setCard(int c, int n);//有
    int getCard(int i) const;
    string printCard(int);
    Point getPoint() const;//有
    void setPoint(Point);
};

#endif