#include<iostream>
#include <ctime>
#include "Card.h"
#include "Point.h"
#include "Player.h"
#include "QA.h"
using namespace std;
void Delay(int time)
{
	clock_t   now = clock();
	while (clock() - now < time);
}
void gameRule()
{
	int m = 0;
	while (m != 1)
	{
		cout << " 十點半遊戲開始 \n" << endl;
		cout << " 遊戲人數2人，Player1先為莊家，換場莊家也換人。" << endl;
		cout << " 閒家先開始遊戲，等閒家結束遊戲後，再換莊家開始遊戲。" << endl;
		cout << " 遊戲規則與計分如下:" << endl;
		cout << " 閒家先要牌，要牌按 Y or y ，不要牌按 N or n" << endl;
		cout << " 若抽到JQK，則為0.5點" << endl;
		cout << " 閒家完畢後換莊家要牌。" << endl;
		cout << " 雙方結束要牌後，開牌並結算該局成績，計分如下 :" << endl;
		cout << " 每場遊戲的贏家得一分。" << endl;
		cout << " !!此遊戲不扣分!!" << endl;
		cout << endl;
		cout << " 閱讀完畢請按 1" << endl;
		cout << endl;
		cin >> m;
		system("cls");
	}
}
void game(Player P1, Player P2, Point p1, Point p2)
{
	Card c;
	int cardnum = 0;
	double CardPoint1 = 0;
	int card1 = 0, n1 = 1;
	cout << " \n莊家在5秒內迴避" << endl;
	Delay(5 * 1000);
	system("cls");
	cout << " \n閒家底牌為 :";
	c.print(cardnum);
	cout << " (請記得)" << endl;
	P1.setCard(c.getCard(cardnum), cardnum+1);
	cout << " \n要加牌按1，不加牌按0" << endl;
	cin >> n1;
	system("cls");
	cardnum++;
	while (n1 != 0 && cardnum < 5 && CardPoint1 < 10.5)
	{
		cout << " \n閒家第 " << cardnum+1 <<" 張牌為 :";
		c.print(cardnum);
		P1.setCard(c.getCard(cardnum), cardnum+1);
		cout << " \n要加牌按1，不加牌按0" << endl;
		cin >> n1;
		system("cls");
		cardnum++;
	}
	cout << P1.getPoint().getCardPoint() << endl;
	cout << " 換莊家看牌";
	
}

int main() {
	gameRule();
	string player1, player2;
	cout << " 請輸入名字(Player1): ";
	cin >> player1;
	cout << " 請輸入名字(Player2): ";
	cin >> player2;
	
	Player P1(player1, 0, 0);
	Player P2(player2, 0, 0);
	Point point1(0);
	Point point2(0);
	game(P1,  P2,  point1,  point2);
	return 0;
}