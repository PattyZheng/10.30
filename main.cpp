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
	QA('s');//遊戲規則
	int n;
	cin >> n;
	QA(n,0);
	string player1, player2;
	cout << "請輸入名字(Player1): ";
	cin >> player1;
	cout << "請輸入名字(Player2): ";
	cin >> player2;
	Player P1(player1, 0);
	Player P2(player2, 0);
	cout << "\nP1";
	P1.toString();
	cout << "P2";
	P2.toString();
	Delay(5 * 1000);
	system("cls");
	cout << "請閒家在5秒內迴避" << endl;
	Delay(5 * 1000);
	system("cls");
}