#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;


int main() {
	int a[5];
	for (int i = 0; i < 5; ++i) {
		cin >> a[i];
	}

	for (int i = 0; i < 5; ++i) {
		if (a[i] == 0) {
			cout << i + 1 << endl;
		}
	}
	return 0;
}