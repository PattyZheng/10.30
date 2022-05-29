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
	if (st == 's') {  //遊戲規則
		cout << " 十點半遊戲開始 \n" << endl;
		cout << " 遊戲人數2人，Player1先為莊家，換場莊家也換人。" << endl;
		cout << " 莊家先看底牌，發底牌時，請另一位玩家迴避，每人一張底牌，請牢記底牌。" <<  endl;
		cout << " 遊戲規則與計分如下:" << endl;
		cout << " 閒家先要牌，要牌按 Y or y ，不要牌按 N or n" << endl;
		cout << " 若抽到JQK，則為0.5點" << endl;
		cout << " 閒家完畢後換莊家要牌。" << endl;
		cout << " 雙方結束要牌後，開牌並結算該局成績，計分如下 :" << endl;
		cout << " 狀況1 : 若在要牌時，玩家點數大於10.5，及另一位玩家獲勝，可得2分" << endl;
		cout << " 狀況2 : 若玩家牌數等於５張時，此局結束，該玩家可得5分" << endl;
		cout << " 狀況3 : 若莊家與閒家點數相同，莊家獲勝，可得2分(若牌分同時都10.5，莊家可得5分)" << endl;
		cout << " 狀況4 : 若玩家牌分等於10.5可得5分" << endl;
		cout << " 狀況5 : 若閒家牌分大於莊家牌分，閒家可得2分" << endl;
		cout << " !!此遊戲不扣分!!" << endl;
		cout << endl;
		cout << " 閱讀完畢請按 1"<< endl;

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
		ss << "輸入錯誤，再試一次" << endl;
		return ss.str();
	}
}
void QA::newCard() {

}