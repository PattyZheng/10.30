#ifndef Card_H
#define Card_H

class Card{ //�����t�d
private:
	int card[52];
public:
	Card();
	void shuffle();//�~�P
	int getCard(int);//0~51
	void print(int i);//�R��3
};
#endif
