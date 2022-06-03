#include <string>
#include "Point.h"
using namespace std;
#ifndef Player_H
#define Player_H

class Player
{
private:
    string name;
    static int PlayerSum;
    Point point;
    int playerCard[5];
public:
    Player();
    Player(string, int ,Point);//�W�r,�`��
    void setName(string);
    string getName();//��
    void plusPlayerSum();//��
    int getPlayerSum();//��
    void toString();
    void setCard(int c, int n);//��
    int getCard(int i) const;
    Point getPoint() const;//��
};

#endif