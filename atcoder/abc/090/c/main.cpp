#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <vector>

using namespace std;

int a, b;
bool CheckBorder(const int row, const int col) {
	if (row == a) return false;
	if (row == -1) return false;
	if (col == b) return false;
	if (col == -1) return false;

	return true;
}

int main() {
	cin >> a >> b;

	vector< vector<bool> > vvb_table( a, vector<bool>(b, false) );

	unsigned long long ans = 0;
	for (int i = 0; i < a; ++i) {
		for (int j = 0; j < b; ++j) {

			int count = 0;
			for (int i_delta = -1; i_delta <= 1; ++i_delta) {
				for (int j_delta = -1; j_delta <= 1; ++j_delta) {
					if (i_delta == 0 && j_delta == 0) continue;
					if (CheckBorder(i + i_delta, j + j_delta)) {
						++count;
					}
				}
			}
			if (count % 2 == 0) ++ans;
		}
	}

	cout << ans << endl;

	return 0;
}