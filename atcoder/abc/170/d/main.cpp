#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> A(n, 0);
	int max = 0;
	for (int i = 0; i < n; ++i) {
		int temp;
		scanf("%d", &temp);
		A[i] = temp;
		if (max < temp) {
			max = temp;
		}
	}

	sort(A.begin(), A.end());

	vector<int> vb_dp(max+1, 0);

	for (int ia = 0; ia < A.size(); ++ia) {
		int i = 1;
		while (vb_dp.size() > i*A[ia]) {
			vb_dp[i * A[ia]]++;
			++i;
		}
	}

	int score = 0;
	for (int i = 0; i < A.size(); ++i) {
		if (vb_dp[A[i]]==1)
			score++;
	}

	cout << score << endl;

	return 0;
}