#ifndef QA_H
#define QA_H
#include<string>
using namespace std;

class QA {
public:
	QA();
	QA(char);
	QA(int,int);
	string returnAns();
	void newCard();

private:
	int ans;
};

#endif