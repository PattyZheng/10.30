#include<iostream>
#include <ctime>
#include "Card.h"
#include "Point.h"
#include "Player.h"
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
		cout << " 若有要加牌請按1，若不要加牌請按0。" << endl;
		cout << " 若抽到JQK，則為0.5點。" << endl;
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
void game(Player &P1, Player &P2)
{
	Card c;
	int num = 1;
	int cardnum = 0;
	double CardPoint1 = 0;
	int card1 = 0;
	bool n1 = true;
	cout << " \n莊家在3秒內迴避" << endl;
	Delay(3 * 1000);
	system("cls");
	cout << " 閒家底牌為 :";
	c.print(cardnum);
	cout << " (請記得)" << endl;
	P2.setCard(c.getCard(cardnum), cardnum + 1);
	cout << " \n 要加牌按1，不加牌按0" << endl;
	cin >> n1;
	system("cls");
	cardnum++;

	while (n1 && num < 5 && P2.getPoint().getCardPoint() < 10.5)
	{
		num++;
		cout << " 閒家第 " << num << " 張牌為 :";
		c.print(cardnum);
		Delay(1 * 1000);
		P2.setCard(c.getCard(cardnum), num);
		if (P2.getPoint().getCardPoint() < 10.5) {
			cout << " \n 要加牌按1，不加牌按0" << endl;
			cin >> n1;
		}
		system("cls");
		cardnum++;
	}
	if (P2.getPoint().getCardPoint() > 10.5) {
		cout << " 爆掉啦!哈哈你輸了，莊家贏此局!" << endl;
		Delay(1 * 1000);
		cout << " 閒家牌分為 :" << P2.getPoint().getCardPoint() << " 點" << endl;
		cout << " 莊家獲勝，得1分" << endl;
		P1.plusPlayerSum();
		cout << P1.getPlayerSum() << endl;
		Delay(6 * 1000);
	}
	else if (num == 5) {
		cout << " 已得五張牌，恭喜贏這局!" << endl;
		Delay(1 * 1000);
		cout << " 閒家牌分為 :" << P2.getPoint().getCardPoint() << " 點" << endl;
		cout << " 閒家獲勝，得1分";
		P2.plusPlayerSum();
		Delay(6 * 1000);
	}
	else if (P2.getPoint().getCardPoint() == 10.5) {
		cout << " 剛好十點半，恭喜贏這局!" << endl;
		Delay(1 * 1000);
		cout << " 閒家牌分為 :" << P2.getPoint().getCardPoint() << " 點" << endl;
		cout << " 閒家獲勝，得1分";
		P2.plusPlayerSum();
		Delay(6 * 1000);
	}
	else
		cout << " 換莊家看牌\n 閒家在3秒內迴避";

	if (num < 5 && P2.getPoint().getCardPoint() < 10.5) {
		num = 1;
		Delay(3 * 1000);
		system("cls");
		cout << " 莊家底牌為 :";
		c.print(cardnum);
		cout << " (請記得)" << endl;
		P1.setCard(c.getCard(cardnum), num);

		cout << " \n 要加牌按1，不加牌按0" << endl;
		cin >> n1;
		system("cls");
		cardnum++;
		while (n1 && num < 5 && P1.getPoint().getCardPoint() < 10.5)
		{
			num++;
			cout << " 莊家第 " << num << " 張牌為 :";
			c.print(cardnum);
			Delay(1 * 1000);
			P1.setCard(c.getCard(cardnum), cardnum + 1);
			if (P1.getPoint().getCardPoint() < 10.5) {
				cout << " \n 要加牌按1，不加牌按0" << endl;
				cin >> n1;
			}
			system("cls");
			cardnum++;
		}
		if (P1.getPoint().getCardPoint() > 10.5) {
			cout << " 爆掉啦!哈哈你輸了，閒家贏此局!" << endl;
			Delay(1 * 1000);
		}
		else if (num == 5) {
			cout << " 已得五張牌，恭喜贏這局!" << endl;
			Delay(1 * 1000);
		}
		else if (P1.getPoint().getCardPoint() == 10.5) {
			cout << " 剛好十點半，恭喜贏這局!" << endl;
			Delay(1 * 1000);
		}

		cout << " 莊家牌分為 :" << P1.getPoint().getCardPoint() << " 點" << endl;
		cout << " 閒家牌分為 :" << P2.getPoint().getCardPoint() << " 點" << endl;
		if (P1.getPoint().getCardPoint() < 10.5 && P1.getPoint().getCardPoint() >= P2.getPoint().getCardPoint()) {
			cout << " 莊家獲勝，得1分";
			P1.plusPlayerSum();
			Delay(3 * 1000);
		}
		else {
			cout << " 閒家獲勝，得1分";
			P2.plusPlayerSum();
		}

		Delay(4 * 1000);
	}
}

int main() {
	gameRule();
	string player1, player2;
	bool again = true;
	cout << " 請輸入名字(Player1): ";
	cin >> player1;
	cout << " 請輸入名字(Player2): ";
	cin >> player2;

	Player P1(player1, 0, Point(0));
	Player P2(player2, 0, Point(0));

	while (again)
	{
		game(P1, P2);
		system("cls");
		cout << " 目前總分:" << endl;
		cout << " Player1 " << P1.getName() << " :" << P1.getPlayerSum() << "分" << endl;
		cout << " Player2 " << P2.getName() << " :" << P2.getPlayerSum() << "分" << endl;
		Delay(3 * 1000);
		game(P2, P1);
		system("cls");
		cout << " 目前總分:" << endl;
		cout << " Player1 " << P1.getName() << " :" << P1.getPlayerSum() << "分" << endl;
		cout << " Player2 " << P2.getName() << " :" << P2.getPlayerSum() << "分" << endl;
		Delay(3 * 1000);
		cout << " 若要繼續玩請按1，若要結束請按0" << endl;
		cin >> again;
	}
	cout << "~~~遊戲結束~~~" << endl;
	cout << "\n最終獲勝的是 :";
	if (P1.getPlayerSum() > P2.getPlayerSum())
		cout << P1.getName() << endl;
	else if (P1.getPlayerSum() == P2.getPlayerSum())
		cout << P1.getName() << " and " << P2.getName() << " (平手)" << endl;
	else
		cout << P2.getName() << endl;

	return 0;
}