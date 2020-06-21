#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
	int k, n;
	cin >> n >> k;
	vector<int> v_inputs(n);
	for (int i = 0; i < n; ++i) {
		cin >> v_inputs[i];
	}
	sort(v_inputs.begin(), v_inputs.end());

	int score = 0;
	for (int i = 0; i < k; ++i) {
		score += v_inputs[i];
	}

	cout << score << endl;

	return 0;
}