#include<iostream>
#include"Card.h"
using namespace std;

Card::Card()
{
	/*
	測試
	int temp[9] = { 3,11,9,11,1,1};
	for (int i = 0; i < 9; i++)
		card[i] = temp[i];
	for (int i = 9; i < 52; i++)
		card[i] = i;
	*/
	for (int i = 0; i < 52; i++)
	{
		card[i] = i;
	}
	shuffle();
}
void Card::shuffle()
{
	srand(time(0));
	for (int i = 51; i > 0; i--)
	{
		int temp;
		int j = rand() % (i+1);
		temp = card[i];
		card[i] = card[j];
		card[j] = temp;
	}
}
int Card::getCard(int i)
{
	return card[i];
}
void Card::print(int i)
{
	string suits[] = { "黑桃", "愛心", "方塊", "梅花" };
	string ranks[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
	string suit = suits[card[i] / 13];
	string rank = ranks[card[i] % 13];
	cout << suit << ' ' << rank << endl;// 黑桃 5
}