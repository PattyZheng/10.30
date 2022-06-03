#include<iostream>
#include"Card.h"
using namespace std;

Card::Card()
{
	/*
	測試
	int temp[9] = { 0,1,10,11,13,14,23,24,25};
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
		int j = rand() % i;
		temp = card[i];
		card[i] = card[j];
		card[j] = temp;
	}
}
int Card::getCard(int i)//有
{
	return card[i];
}
void Card::print(int i)//有
{
	string suits[] = { "黑桃", "愛心", "方塊", "梅花" };
	string ranks[] = { "A", "2", "3", "4", "5", "6", "7", "8", "9","10", "J", "Q", "K" };
	string suit = suits[card[i] / 13];//0,1,2,3  22/13 = 1.. 9
	string rank = ranks[card[i] % 13];
	cout << suit << ' ' << rank << endl;
}