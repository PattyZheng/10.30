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
	cout << " �Q�I�b�C���}�l \n" << endl;
	cout << " �C���H��2�H�APlayer1�������a�A�������a�]���H�C" << endl;
	cout << " ���a���}�l�C���A�����a�����C����A�A�����a�}�l�C���C" << endl;
	cout << " �C���W�h�P�p���p�U:" << endl;
	cout << " �Y���n�[�P�Ы�1�A�Y���n�[�P�Ы�0�C" << endl;
	cout << " �Y���JQK�A�h��0.5�I�C" << endl;
	cout << " ���a�����ᴫ���a�n�P�C" << endl;
	cout << " ���赲���n�P��A�}�P�õ���ӧ����Z�A�p���p�U :" << endl;
	cout << " �C���C����Ĺ�a�o1���C" << endl;
	cout << " !!���C��������!!" << endl;
	cout << endl;
	cout << " �\Ū�����Ы� enter" << endl;
	cout << "\n\n\n �` :�Y�Ӫ��a�o���i�P�Ӫ��a��ӱo1���A�����ӧ�" << endl;
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
	cout << " �������a�� :" << P1.getName() << endl;
	cout << " �������a�� :" << P2.getName() << endl;
	cout << " ���a(" << P2.getName() << ")����P" << endl;
	cout << "\n �\Ū�����Ы� enter" << endl;
	_getch();
	system("cls");
	cout << " ���a(" << P1.getName() << ")�b3���j��" << endl;
	Delay(3 * 1000);
	system("cls");
	cout << " ���a(" << P2.getName() << ")���P�� :";
	c.print(cardnum);
	cout << " (�аO�o)" << endl;
	P2.setCard(c.getCard(cardnum), num);
	cout << "\n �n�[�P��1�A���[�P��0" << endl;
	n1 = yasorno();
	system("cls");
	cardnum++;

	while (n1 && num < 5 && P2.getPoint().getCardPoint() < 10.5)
	{

		num++;
		cout << " ���a(" << P2.getName() << ")�� " << num << " �i�P�� :";
		c.print(cardnum);
		P2.setCard(c.getCard(cardnum), num);
		cout << " ���a�ثe�� :���P ";
		for (int i = 2; i <= num; i++) {
			cout << " " << P2.printCard(i) << " ";
		}
		cout << endl;
		
		if (P2.getPoint().getCardPoint() < 10.5 && num < 5) {
			cout << "\n �n�[�P��1�A���[�P��0" << endl;
			n1 = yasorno();
		}
		else
			Delay(2 * 1000);

		system("cls");
		cardnum++;
	}
	if (P2.getPoint().getCardPoint() > 10.5) {
		cout << " �z����!�����A��F�A���a(" << P1.getName() << ")Ĺ����!" << endl;
		Delay(1 * 1000);
		cout << "\n ���a(" << P2.getName() << ")�P���� :" << P2.getPoint().getCardPoint() << " �I" << endl;
		cout << "\n ���a(" << P1.getName() << ")��ӡA�o1��" << endl;
		P1.plusPlayerSum();
	}
	else if (num == 5) {
		cout << " �w�o���i�P�A����Ĺ�o��!" << endl;
		Delay(1 * 1000);
		cout << "\n ���a(" << P2.getName() << ")�P���� :" << P2.getPoint().getCardPoint() << " �I" << endl;
		cout << "\n ���a(" << P2.getName() << ")��ӡA�o1��" << endl;
		P2.plusPlayerSum();
	}
	else
		cout << " �����a(" << P1.getName() << ")�ݵP\n ���a�b3���j��";


	if (num < 5 && P2.getPoint().getCardPoint() <= 10.5) {
		num = 1;
		Delay(3 * 1000);
		system("cls");
		cout << " ���a(" << P1.getName() << ")���P�� :";
		c.print(cardnum);
		cout << " (�аO�o)" << endl;
		P1.setCard(c.getCard(cardnum), num);
		cout << "\n �n�[�P��1�A���[�P��0" << endl;
		n1 = yasorno();
		system("cls");
		cardnum++;
		while (n1 && num < 5 && P1.getPoint().getCardPoint() < 10.5)
		{

			num++;
			cout << " ���a(" << P1.getName() << ")�� " << num << " �i�P�� :";
			c.print(cardnum);
			P1.setCard(c.getCard(cardnum), num);
			cout << " ���a�ثe�� :���P ";
			for (int i = 2; i <= num; i++) {
				cout << " " << P1.printCard(i) << " ";
			}
			cout << endl;
			
			if (num < 5 && P1.getPoint().getCardPoint() < 10.5) {
				cout << "\n �n�[�P��1�A���[�P��0" << endl;
				n1 = yasorno();
			}
			else
				Delay(2.5 * 1000);

			system("cls");
			cardnum++;
		}
		if (P1.getPoint().getCardPoint() > 10.5) {
			cout << " �z����!�����A��F�A���a(" << P2.getName() << ")Ĺ����!" << endl;
			Delay(1 * 1000);
		}
		else if (num == 5) {
			cout << " �w�o���i�P�A����Ĺ�o��!" << endl;
			Delay(1 * 1000);
		}
		else if (P1.getPoint().getCardPoint() == 10.5) {
			cout << " ��n�Q�I�b�A����Ĺ�o��!" << endl;
			Delay(1 * 1000);
		}

		cout << " ���a(" << P1.getName() << ")�P���� :" << P1.getPoint().getCardPoint() << " �I" << endl;
		cout << " ���a(" << P2.getName() << ")�P���� :" << P2.getPoint().getCardPoint() << " �I" << endl;
		if (P1.getPoint().getCardPoint() < 10.5 && P1.getPoint().getCardPoint() >= P2.getPoint().getCardPoint()) {
			cout << "\n ���a(" << P1.getName() << ")��ӡA�o1��" << endl;
			P1.plusPlayerSum();
		}
		else {
			cout << "\n ���a(" << P2.getName() << ")��ӡA�o1��" << endl;
			P2.plusPlayerSum();
		}
	}
}

int main() {
	gameRule();//�I�s�C���W�h
	string player1, player2;
	bool again = true;
	cout << " �п�J�W�r(Player1): ";
	cin >> player1;
	cout << " �п�J�W�r(Player2): ";
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
			game(P1, P2);//�_��
		cout << "\n �\Ū�����Ы� enter" << endl;
		_getch();
		system("cls");
		cout << " �ثe�`��:" << endl;
		cout << " Player1 " << P1.getName() << " :" << P1.getPlayerSum() << "��" << endl;
		cout << " Player2 " << P2.getName() << " :" << P2.getPlayerSum() << "��" << endl;
		cout << "\n �Y�n�~�򪱽Ы�1�A�Y�n�����Ы�0" << endl;
		again = yasorno();
		gamenum++;

	}
	system("cls");
	cout << "~~~�C������~~~" << endl;
	cout << "\n�̲���Ӫ��O :";
	if (P1.getPlayerSum() > P2.getPlayerSum())
		cout << P1.getName() << endl;
	else if (P1.getPlayerSum() == P2.getPlayerSum())
		cout << P1.getName() << " and " << P2.getName() << " (����)" << endl;
	else
		cout << P2.getName() << endl;

	return 0;
}