#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
 
using namespace std;
 
int main() {
	int N, K;
	cin >> N >> K;
	vector<int> v_lamps(N);
 
	for (int n = 0; n < N; ++n) {
		int temp;
		scanf("%d", &temp);
		v_lamps[n] = temp;
	}
 
	for (int ik = 0; ik < K; ++ik) {
		vector<int> b(N + 1, 0);
		for (int in = 0; in < N; ++in) {
			int l = max(0, in - v_lamps[in]);
			int r = min(in+v_lamps[in]+1, N);
			b[l]++;
			b[r]--;
		}

		for (int in = 0; in < N; ++in) {
			b[in + 1] += b[in];
		}

		b.pop_back();
		if (v_lamps == b) break;
		v_lamps = b;

	}
 
	for (auto lamp : v_lamps) {
		cout << lamp << " ";
	}
	cout << endl;
 
	return 0;
}
