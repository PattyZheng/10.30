#ifndef Card_H
#define Card_H

class Card{ //�����t�d

public:
	Card();
	int card[52];
	void shuffle();//�~�P
	int getCard(int);//0~51
	void print(int i);//�R��3
};
#endif
