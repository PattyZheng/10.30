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
    Player(string, int ,Point);
    void setName(string);
    string getName();
    void plusPlayerSum();
    int getPlayerSum();
    void setCard(int c, int n);
    string printCard(int);
    Point getPoint() const;
    void setPoint(Point);
};

#endif