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
		cout << " �Y���n�[�P�Ы�1�A�Y���n�[�P�Ы�0�C" << endl;
		cout << " �Y���JQK�A�h��0.5�I�C" << endl;
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
	int num = 1;
	int cardnum = 0;
	double CardPoint1 = 0;
	int card1 = 0;
	bool n1= true;
	cout << " \n���a�b5���j��" << endl;
	Delay(5 * 1000);
	system("cls");
	cout << " ���a���P�� :";
	c.print(cardnum);
	cout << " (�аO�o)" << endl;
	P2.setCard(c.getCard(cardnum), cardnum+1);
	cout << " \n �n�[�P��1�A���[�P��0" << endl;
	cin >> n1;
	system("cls");
	cardnum++;
	
	while (n1 && num < 5 && P2.getPoint().getCardPoint() < 10.5)
	{
		num++;
		cout << " ���a�� " << num <<" �i�P�� :";
		c.print(cardnum);
		Delay(3 * 1000);
		P2.setCard(c.getCard(cardnum), num);
		if (P2.getPoint().getCardPoint() < 10.5) {
			cout << " \n �n�[�P��1�A���[�P��0" << endl;
			cin >> n1;
		}
		system("cls");
		cardnum++;
	}
	if (num == 5) {
		cout << " �w�o���i�P�A����Ĺ�o��!" << endl;
		Delay(3 * 1000);
		cout << " ���a�P���� :" << P2.getPoint().getCardPoint() << " �I" << endl;
		cout << " ���a��ӡA�o1��";
		P2.plusPlayerSum();
		Delay(3 * 1000);
	}
	else if (P2.getPoint().getCardPoint() == 10.5) {
		cout << " ��n�Q�I�b�A����Ĺ�o��!" << endl;
		Delay(3 * 1000);
		cout << " ���a�P���� :" << P2.getPoint().getCardPoint() << " �I" << endl;
		cout << " ���a��ӡA�o1��";
		P2.plusPlayerSum();
		Delay(3 * 1000);
	}
	else if (P2.getPoint().getCardPoint() > 10.5) {
		cout << " �z����!�����A��F�A���aĹ����!" << endl;
		P1.plusPlayerSum();
		Delay(3 * 1000);
	}

	else
		cout << " �����a�ݵP\n ���a�b5���j��";
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