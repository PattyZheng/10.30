#include "Player.h"
#include "Point.h"
#include <iostream>
#include <sstream>
using namespace std;

int Player::PlayerSum = 0;
Player::Player(){

}

Player::Player(string n, int ps ,Point p){
    name = n;
    ps = PlayerSum;
    
}

string Player::getName()
{
    return name;
}

int Player::getPlayerSum()
{
    return PlayerSum;
}
string Player::toString() {
    stringstream ss;
    ss << "name: " << name << " , " << "Point: " << PlayerSum << endl;
    return ss.str();
}