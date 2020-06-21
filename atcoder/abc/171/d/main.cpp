#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v_table(10*10*10*10*10+1, 0);
	long long sum = 0;
	for (int i = 0; i < n; ++i) {
		int a;
		scanf("%d", &a);
		v_table[a]++;
		sum += (long long)a;
	}
	int q; cin >> q;

	for (int i = 0; i < q; ++i) {
		int b, c;
		scanf("%d %d", &b, &c);

		sum += (long long)(v_table[b] * c);
		sum -= (long long)(v_table[b] * b);
		v_table[c] += v_table[b];
		v_table[b] -= v_table[b];

		cout << sum << endl;
	}

	return 0;
}