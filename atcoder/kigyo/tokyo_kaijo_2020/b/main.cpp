#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	long long int a, b;
	long long int v, w, t;
	std::cin >> a >> v;
	std::cin >> b >> w;
	std::cin >> t;

	long long int distance = abs(b - a);
	long long int speed = abs(w-v);

	if (w - v >= 0) {
		cout << "NO" << endl;
		return 0;
	}

	if (distance <= t*speed) {
		std::cout << "YES" << std::endl;
	}
	else {
		std::cout << "NO" << std::endl;
	}

	return 0;
}
