#include "QA.h"
#include<iostream>
#include <sstream>
using namespace std;
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
	if (st == 's') {  //�C���W�h
		cout << " �Q�I�b�C���}�l \n" << endl;
		cout << " �C���H��2�H�APlayer1�������a�A�������a�]���H�C" << endl;
		cout << " ���a���ݩ��P�A�o���P�ɡA�Хt�@�쪱�a�j�סA�C�H�@�i���P�A�Шc�O���P�C" <<  endl;
		cout << " �C���W�h�P�p���p�U:" << endl;
		cout << " ���a���n�P�A�n�P�� Y or y �A���n�P�� N or n" << endl;
		cout << " �Y���JQK�A�h��0.5�I" << endl;
		cout << " ���a�����ᴫ���a�n�P�C" << endl;
		cout << " ���赲���n�P��A�}�P�õ���ӧ����Z�A�p���p�U :" << endl;
		cout << " ���p1 : �Y�b�n�P�ɡA���a�I�Ƥj��10.5�A�Υt�@�쪱�a��ӡA�i�o2��" << endl;
		cout << " ���p2 : �Y���a�P�Ƶ��󢴱i�ɡA���������A�Ӫ��a�i�o5��" << endl;
		cout << " ���p3 : �Y���a�P���a�I�ƬۦP�A���a��ӡA�i�o2��(�Y�P���P�ɳ�10.5�A���a�i�o5��)" << endl;
		cout << " ���p4 : �Y���a�P������10.5�i�o5��" << endl;
		cout << " ���p5 : �Y���a�P���j����a�P���A���a�i�o2��" << endl;
		cout << " !!���C��������!!" << endl;
		cout << endl;
		cout << " �\Ū�����Ы� 1"<< endl;

		cout << " " << endl;

	}
}
QA::QA(int n,int a) {
	if(n==1)
		system("cls");
}
string QA::returnAns() {
	if (ans == 0) {
		stringstream ss;
		ss << "��J���~�A�A�դ@��" << endl;
		return ss.str();
	}
}
void QA::newCard() {

}