#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

string IntToStr(const long long _a) {
	string result;
	int a = (int)_a;
	if (a == 0) result = "a";
	if (a == 1) result = "b";
	if (a == 2) result = "c";
	if (a == 3) result = "d";
	if (a == 4) result = "e";
	if (a == 5) result = "f";
	if (a == 6) result = "g";
	if (a == 7) result = "h";
	if (a == 8) result = "i";
	if (a == 9) result = "j";
	if (a == 10) result = "k";
	if (a == 11) result = "l";
	if (a == 12) result = "m";
	if (a == 13) result = "n";
	if (a == 14) result = "o";
	if (a == 15) result = "p";
	if (a == 16) result = "q";
	if (a == 17) result = "r";
	if (a == 18) result = "s";
	if (a == 19) result = "t";
	if (a == 20) result = "u";
	if (a == 21) result = "v";
	if (a == 22) result = "w";
	if (a == 23) result = "x";
	if (a == 24) result = "y";
	if (a == 25) result = "z";

	return result;
}

int main() {
	long long target;
	cin >> target;

	vector<string> outputs;
	while (target > 0) {
		target--;
		long long amari = target % (long long)26;
		outputs.push_back(IntToStr(amari));
		target = target / (long long)26;
	}

	for (int i = 0; i < outputs.size(); i++) {
		cout << outputs[outputs.size() - i - 1];
	}

	cout << endl;

	return 0;
}