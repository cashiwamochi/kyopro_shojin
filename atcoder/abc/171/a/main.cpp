#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
	char s;
	cin >> s;
	if (isupper(s)) {
		cout << "A" << endl;
	}
	else {
		cout << "a" << endl;
	}
	return 0;
}