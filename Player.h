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
    Player(string, int ,Point);//¦W¦r,Á`¤À
    string getName();
    int getPlayerSum();
    string toString();
    void setCard(int c, int n);
    int getCard(int i)const;
    Point getPoint()const;
};

#endif