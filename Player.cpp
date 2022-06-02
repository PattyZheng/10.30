#include "Player.h"
#include "Point.h"
#include <iostream>
#include <sstream>
using namespace std;


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
void Player::plusPlayerSum() {
    PlayerSum++;
}
int Player::getPlayerSum()
{
    return PlayerSum;
}
void Player::toString() {
    stringstream ss;
    cout << "name: " << name << " , " << "Point: " << PlayerSum;
    point.toString();
}
void Player::setCard(int c, int n)
{
    playerCard[n - 1] = c;
    point.plusCardPoint(c);
}

int Player::getCard(int i)const
{
    return playerCard[i - 1];
}
Point Player::getPoint()const
{
    return point;
}