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
string Player::getName()//有
{
    return name;
}
void Player::plusPlayerSum()//有
{
    PlayerSum++;
}
int Player::getPlayerSum()//有
{
    return PlayerSum;
}
void Player::setCard(int c, int n)//有
{
    playerCard[n - 1] = c;
    point.plusCardPoint(c);
}
int Player::getCard(int i) const
{
    return playerCard[i - 1];
}
string Player::printCard(int c) {
    stringstream ss;
    string suits[] = { "黑桃", "愛心", "方塊", "梅花" };
    string ranks[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
    string suit = suits[playerCard[c] / 13];//0,1,2,3  22/13 = 1.. 9
    string rank = ranks[playerCard[c] % 13];
    ss << suit << ' ' << rank ;
    return ss.str();
}
Point Player::getPoint() const //有
{
    return point;
}
void Player::setPoint(Point p) {
    point = p;
}
