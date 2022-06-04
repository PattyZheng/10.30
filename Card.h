#ifndef Card_H
#define Card_H

class Card{

public:
	Card();
	int number = 52;
	int card[52];
	void shuffle();
	int getCard(int);
	void print(int i);
};
#endif
