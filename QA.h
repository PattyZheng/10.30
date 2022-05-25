#ifndef QA_H
#define QA_H
#include<string>
using namespace std;

class QA {
public:
	QA();
	QA(char);
	string returnAns();
	string newCard();

private:
	int ans;
};

#endif