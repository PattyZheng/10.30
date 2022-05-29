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

public:
    Player();
    Player(string, int);
    string getName();
    int getPlayerSum();
    void toString();
};

#endif