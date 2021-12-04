#include "stdafx.h"
#include "iostream"
#include "cstdlib"
using namespace std;
bool imp(bool x, bool y) {
	return !(x && !y);
}
bool eqa(bool x, bool y) {
	return (x == y);
}
void first() {
	bool x;
	bool y;
	cout << "x" << endl;
	cin >> x;
	cout << "x to: " << x << endl;
	cout << "not x: " << !x << endl;
	cout << "y" << endl;
	cin >> y;
	cout << "y to: " << y << endl;
	cout << "not y: " << !y << endl;
	cout << "x & y: " << (x&&y) << endl;
	cout << "x || y: " << (x || y) << endl;
	cout << "if x, then y: " << imp(x, y) << endl;
	cout << "x equals y: "<< eqa(x, y) << endl;
	
}
void second() {
	int p = 1;
	int q = 1;
	int r = 0;
	cout << "a) " << (p&&q) << endl;
	cout << "b) " << (p || q) << endl;
	cout << "c) " << (!p && (p || q)) << endl;
	cout << "d) " << imp((p&&r), r) << endl;
	cout << "e) " << !eqa(p, (q || r)) << endl;
	cout << "f) " << eqa((imp(p, r) || !q), imp(p, (r && !q))) << endl;
	cout << "g) " << imp((!r||q) || !(q&&r),!imp(q,p)) << endl;
}
void hex(int i){
	if (i > 9) {
		switch (i) {
		case 10:
			cout << "A";
			break;
		case 11:
			cout << "B";
			break;
		case 12:
			cout << "C";
			break;
		case 13:
			cout << "D";
			break;
		case 14:
			cout << "E";
			break;
		case 15:
			cout << "F";
			break;
		}
	}
	else { 
		cout << i;
	}
}
void translation(int i, int from, int to) {
	if (i > 1) {
		translation((i / to), from, to);
		hex(i % to);
	}
	else {
		cout << i;
	}
}

void third() {
	int i;
	cout << "Podaj liczbê: ";
	cin >> i;
	cout << endl << "a) " << endl;
	translation(i, 10, 2);
	cout << endl << "b) " << endl;
	translation(i, 10, 16);
	cout << endl << "c) X" << endl;
	translation(i, 2, 10);
	cout << endl << "d) X" << endl;
	translation(i, 2, 16);
	cout << endl << "e) X" << endl;
	translation(i, 8, 2);
}

int main(){
	int i = 0;
	cout << "Task number: ";
	cin >> i;
	switch (i) {
	case 1:
		first();
		break;
	case 2:
		second();
		break;
	case 3:
		third();
		break;
	}
	system("pause");
	return 0;
}
