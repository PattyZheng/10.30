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
int main() {
	QA('s');//�C���W�h
	int n;
	cin >> n;
	QA(n,0);
	string player1, player2;
	cout << "�п�J�W�r(Player1): ";
	cin >> player1;
	cout << "�п�J�W�r(Player2): ";
	cin >> player2;
	Player P1(player1, 0);
	Player P2(player2, 0);
	cout << "\nP1";
	P1.toString();
	cout << "P2";
	P2.toString();
	Delay(5 * 1000);
	system("cls");
	cout << "�ж��a�b5���j��" << endl;
	Delay(5 * 1000);
	system("cls");
}