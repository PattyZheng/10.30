#include "Player.h"
#include "Point.h"

#include <iostream>
#include <sstream>
using namespace std;

Player::Player()
{

}
Player::Player(string n, int ps ,Point p)
{
    name = n;
    ps = PlayerSum;
    point = p;
}
void Player::setName(string n)
{
    name = n;
}
string Player::getName()
{
    return name;
}
Point Player::getPoint() const
{
    return point;
}
void Player::setPoint(Point p) {
    point = p;
}

void Player::plusPlayerSum()
{
    PlayerSum++;
}
int Player::getPlayerSum()
{
    return PlayerSum;
}
void Player::setCard(int c, int n)
{
    playerCard[n] = c;
    point.plusCardPoint(c);
}
string Player::printCard(int c) {
    stringstream ss;
    string suits[] = { "黑桃", "愛心", "方塊", "梅花" };
    string ranks[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
    string suit = suits[playerCard[c] / 13];
    string rank = ranks[playerCard[c] % 13];
    ss << suit << ' ' << rank;
    return ss.str();
}
