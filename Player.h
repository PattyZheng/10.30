#include <string>
#include "Point.h"
using namespace std;

#ifndef Player_H
#define Player_H

class Player
{
    string name;
    int sum;

public:
    Player();
    Player(string,Point);
    string getName() const;
    int getPoint() const;
};

#endif