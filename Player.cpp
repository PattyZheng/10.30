#include "Player.h"
#include "Point.h"
#include <iostream>
#include <sstream>
using namespace std;

int Player::PlayerSum = 0;
Player::Player(){

}

Player::Player(string n, int ps){
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
void Player::toString() {
    cout << "name: " << name << " , " << "Point: " << PlayerSum << endl;
}