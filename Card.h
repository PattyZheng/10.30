#ifndef Card_H
#define Card_H

class Card{

public:
	Card();
	int number = 52;
	int card[];
	void shuffle();
	int getCard(int);
	void print(int i);
};
#endif
