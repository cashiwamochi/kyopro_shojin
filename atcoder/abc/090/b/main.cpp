#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>

using namespace std;

int main() {
	string a, b;
	cin >> a >> b;
	int ans = 0;
	for (int i = stoi(a); i <= stoi(b); ++i) {
		const string current = to_string(i);
		bool isok = true;
		for (int d = 0; d < current.size() / 2; d++) {
			if (current[d] != current[current.size() - d -1]) {
				isok = false;
				break;
			}
		}
		if (isok) ans++;
	}
	cout << ans << endl;
	return 0;
}