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
		cout << " �Q�I�b�C���}�l \n" << endl;
		cout << " �C���H��2�H�APlayer1�������a�A�������a�]���H�C" << endl;
		cout << " ���a���}�l�C���A�����a�����C����A�A�����a�}�l�C���C" << endl;
		cout << " �C���W�h�P�p���p�U:" << endl;
		cout << " ���a���n�P�A�n�P�� Y or y �A���n�P�� N or n" << endl;
		cout << " �Y���JQK�A�h��0.5�I" << endl;
		cout << " ���a�����ᴫ���a�n�P�C" << endl;
		cout << " ���赲���n�P��A�}�P�õ���ӧ����Z�A�p���p�U :" << endl;
		cout << " �C���C����Ĺ�a�o�@���C" << endl;
		cout << " !!���C��������!!" << endl;
		cout << endl;
		cout << " �\Ū�����Ы� 1" << endl;
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
	cout << " \n���a�b5���j��" << endl;
	Delay(5 * 1000);
	system("cls");
	cout << " \n���a���P�� :";
	c.print(cardnum);
	cout << " (�аO�o)" << endl;
	P1.setCard(c.getCard(cardnum), cardnum+1);
	cout << " \n�n�[�P��1�A���[�P��0" << endl;
	cin >> n1;
	system("cls");
	cardnum++;
	while (n1 != 0 && cardnum < 5 && CardPoint1 < 10.5)
	{
		cout << " \n���a�� " << cardnum+1 <<" �i�P�� :";
		c.print(cardnum);
		P1.setCard(c.getCard(cardnum), cardnum+1);
		cout << " \n�n�[�P��1�A���[�P��0" << endl;
		cin >> n1;
		system("cls");
		cardnum++;
	}
	cout << P1.getPoint().getCardPoint() << endl;
	cout << " �����a�ݵP";
	
}

int main() {
	gameRule();
	string player1, player2;
	cout << " �п�J�W�r(Player1): ";
	cin >> player1;
	cout << " �п�J�W�r(Player2): ";
	cin >> player2;
	
	Player P1(player1, 0, 0);
	Player P2(player2, 0, 0);
	Point point1(0);
	Point point2(0);
	game(P1,  P2,  point1,  point2);
	return 0;
}