#include<iostream>
#include <ctime>
#include <conio.h>
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
	cout << " 十點半遊戲開始 \n" << endl;
	cout << " 遊戲人數2人，Player1先為莊家，換場莊家也換人。" << endl;
	cout << " 閒家先開始遊戲，等閒家結束遊戲後，再換莊家開始遊戲。" << endl;
	cout << " 遊戲規則與計分如下:" << endl;
	cout << " 若有要加牌請按1，若不要加牌請按0。" << endl;
	cout << " 若抽到JQK，則為0.5點。" << endl;
	cout << " 閒家完畢後換莊家要牌。" << endl;
	cout << " 雙方結束要牌後，開牌並結算該局成績，計分如下 :" << endl;
	cout << " 每場遊戲的贏家得1分。" << endl;
	cout << " !!此遊戲不扣分!!" << endl;
	cout << endl;
	cout << " 閱讀完畢請按 enter" << endl;
	cout << "\n\n\n 注 :若該玩家得五張牌該玩家獲勝得1分，結束該局" << endl;
	_getch();
	system("cls");
}
bool yasorno() {
	string nn1;
	bool n1;
	cin >> nn1;
	int n = 0;
	while (n != -1) {
		if (nn1 == "0") {
			n1 = 0;
			n = -1;
		}
		else if (nn1 == "1") {
			n1 = 1;
			n = -1;
		}
		else {
			cout << "Your enter is error,plz enter again." << endl;
			cin >> nn1;
		}
	}
	return n1;
}
void game(Player& P1, Player& P2)
{
	P1.setPoint(Point(0));
	P2.setPoint(Point(0));
	Card c;
	int num = 1;
	int cardnum = 0;
	double CardPoint1 = 0;
	int card1 = 0;
	bool n1 = true;
	cout << " 本輪莊家為 :" << P1.getName() << endl;
	cout << " 本輪閒家為 :" << P2.getName() << endl;
	cout << " 閒家(" << P2.getName() << ")先抽牌" << endl;
	cout << "\n 閱讀完畢請按 enter" << endl;
	_getch();
	system("cls");
	cout << " 莊家(" << P1.getName() << ")在3秒內迴避" << endl;
	Delay(3 * 1000);
	system("cls");
	cout << " 閒家(" << P2.getName() << ")底牌為 :";
	c.print(cardnum);
	cout << " (請記得)" << endl;
	P2.setCard(c.getCard(cardnum), num);
	cout << "\n 要加牌按1，不加牌按0" << endl;
	n1 = yasorno();
	system("cls");
	cardnum++;

	while (n1 && num < 5 && P2.getPoint().getCardPoint() < 10.5)
	{

		num++;
		cout << " 閒家(" << P2.getName() << ")第 " << num << " 張牌為 :";
		c.print(cardnum);
		P2.setCard(c.getCard(cardnum), num);
		cout << " 閒家目前有 :底牌 ";
		for (int i = 2; i <= num; i++) {
			cout << " " << P2.printCard(i) << " ";
		}
		cout << endl;
		
		if (P2.getPoint().getCardPoint() < 10.5 && num < 5) {
			cout << "\n 要加牌按1，不加牌按0" << endl;
			n1 = yasorno();
		}
		else
			Delay(2 * 1000);

		system("cls");
		cardnum++;
	}
	if (P2.getPoint().getCardPoint() > 10.5) {
		cout << " 爆掉啦!哈哈你輸了，莊家(" << P1.getName() << ")贏此局!" << endl;
		Delay(1 * 1000);
		cout << "\n 閒家(" << P2.getName() << ")牌分為 :" << P2.getPoint().getCardPoint() << " 點" << endl;
		cout << "\n 莊家(" << P1.getName() << ")獲勝，得1分" << endl;
		P1.plusPlayerSum();
	}
	else if (num == 5) {
		cout << " 已得五張牌，恭喜贏這局!" << endl;
		Delay(1 * 1000);
		cout << "\n 閒家(" << P2.getName() << ")牌分為 :" << P2.getPoint().getCardPoint() << " 點" << endl;
		cout << "\n 閒家(" << P2.getName() << ")獲勝，得1分" << endl;
		P2.plusPlayerSum();
	}
	else
		cout << " 換莊家(" << P1.getName() << ")看牌\n 閒家在3秒內迴避";


	if (num < 5 && P2.getPoint().getCardPoint() <= 10.5) {
		num = 1;
		Delay(3 * 1000);
		system("cls");
		cout << " 莊家(" << P1.getName() << ")底牌為 :";
		c.print(cardnum);
		cout << " (請記得)" << endl;
		P1.setCard(c.getCard(cardnum), num);
		cout << "\n 要加牌按1，不加牌按0" << endl;
		n1 = yasorno();
		system("cls");
		cardnum++;
		while (n1 && num < 5 && P1.getPoint().getCardPoint() < 10.5)
		{

			num++;
			cout << " 莊家(" << P1.getName() << ")第 " << num << " 張牌為 :";
			c.print(cardnum);
			P1.setCard(c.getCard(cardnum), num);
			cout << " 莊家目前有 :底牌 ";
			for (int i = 2; i <= num; i++) {
				cout << " " << P1.printCard(i) << " ";
			}
			cout << endl;
			
			if (num < 5 && P1.getPoint().getCardPoint() < 10.5) {
				cout << "\n 要加牌按1，不加牌按0" << endl;
				n1 = yasorno();
			}
			else
				Delay(2.5 * 1000);

			system("cls");
			cardnum++;
		}
		if (P1.getPoint().getCardPoint() > 10.5) {
			cout << " 爆掉啦!哈哈你輸了，閒家(" << P2.getName() << ")贏此局!" << endl;
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

		cout << " 莊家(" << P1.getName() << ")牌分為 :" << P1.getPoint().getCardPoint() << " 點" << endl;
		cout << " 閒家(" << P2.getName() << ")牌分為 :" << P2.getPoint().getCardPoint() << " 點" << endl;
		if (P1.getPoint().getCardPoint() < 10.5 && P1.getPoint().getCardPoint() >= P2.getPoint().getCardPoint()) {
			cout << "\n 莊家(" << P1.getName() << ")獲勝，得1分" << endl;
			P1.plusPlayerSum();
		}
		else {
			cout << "\n 閒家(" << P2.getName() << ")獲勝，得1分" << endl;
			P2.plusPlayerSum();
		}
	}
}

int main() {
	gameRule();//呼叫遊戲規則
	string player1, player2;
	bool again = true;
	cout << " 請輸入名字(Player1): ";
	cin >> player1;
	cout << " 請輸入名字(Player2): ";
	cin >> player2;

	Player P1(player1, 0, Point(0));
	Player P2(player2, 0, Point(0));
	int gamenum = 1;

	while (again)
	{
		system("cls");
		if (gamenum % 2 == 0)
			game(P2, P1);
		else
			game(P1, P2);//奇數
		cout << "\n 閱讀完畢請按 enter" << endl;
		_getch();
		system("cls");
		cout << " 目前總分:" << endl;
		cout << " Player1 " << P1.getName() << " :" << P1.getPlayerSum() << "分" << endl;
		cout << " Player2 " << P2.getName() << " :" << P2.getPlayerSum() << "分" << endl;
		cout << "\n 若要繼續玩請按1，若要結束請按0" << endl;
		again = yasorno();
		gamenum++;

	}
	system("cls");
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