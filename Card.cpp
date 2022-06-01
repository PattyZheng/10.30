#include "Card.h"
#include<cstdlib>
#include<ctime>
int number = 52;
Card::Card()
{
	for (int i = 0; i < number; i++) {
		cardarray1[i]=i+1;
	}
	srand(time(0));
	int temp;
	for (int i = number - 1; i > 0; i--)
	{
		int j = rand() % i;
		temp = cardarray1[j];
		cardarray1[j] = cardarray1[i];
		cardarray1[i] = temp;
	}

}

int Card::cardCout() {
	number--;
	return cardarray1[number];
}