#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

struct XV {
	int x;
	int v;
	int distance;
};

bool operator<(const XV& left, const XV& right) {
	return abs(left.x - left.v) < abs(right.x - right.v);
}
 
int main() {
	int x, n;
	cin >> x >> n;
	if (n == 0) {
		cout << x << endl;
		return 0;
	}

	vector<XV> v_p; v_p.resize(n);
	int max = x;
	for (int i = 0; i < n; ++i) {
		int input; cin >> input;
		if (abs(x - max) < abs(x - input)) {
			max = input;
		}
		v_p[i] = XV{x, input, abs(x - input)};
	}

	sort(v_p.begin(), v_p.end());

	int current_idx = 0;
	for (int d = 0; d < abs(x - max) + 2; ++d) {
		const int A = x - d;
		int i = current_idx;
		bool exist = false;
		while (d == v_p[i].distance && i < v_p.size()) {
			if (A == v_p[i].v) exist = true;
			i++;
		}
		if (!exist) {
			cout << A << endl;
			break;
		}

		exist = false;
		const int B = x + d;
		i = current_idx;
		while (d == v_p[i].distance && i < v_p.size()) {
			if (B == v_p[i].v) exist = true;
			i++;
		}
		if (!exist) {
			cout << B << endl;
			break;
		}

		current_idx = i;
	}

	return 0;
}