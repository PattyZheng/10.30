#include "QA.h"
#include <sstream>
QA::QA() {

}
QA::QA(char st) {
	if (st == 'y' || st == 'Y') {
		ans = 1;
	}
	else if (st == 'n' || st == 'N') {
		ans = 2;
	}
	else
		ans = 0;
}
string QA::returnAns() {
	if (ans == 0) {
		stringstream ss;
		ss << "��J���~�A�A�դ@��" << endl;
		return ss.str();
	}
}
string QA::newCard() {

}