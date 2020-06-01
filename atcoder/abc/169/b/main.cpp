#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>

int main() {
	int n;
	scanf("%d", &n);
	unsigned long long ans = 1;
	const unsigned long long limit = 1e18;
	std::vector<unsigned long long> inputs;
	for (int i = 0; i < n; ++i) {
		unsigned long long tmp;
		scanf("%llu", &tmp);
		if (tmp == 0) {
			printf("0\n");
			return 0;
		}
		inputs.push_back(tmp);
	}
	std::sort(inputs.begin(), inputs.end());
	for (int i = 0; i < n; ++i) {
		//ans *= inputs[i];
		if (ans > limit/inputs[i]) {
			printf("-1\n");
			return 0;
		}
		else 
			ans *= inputs[i];
	}

	printf("%llu\n", ans);

	return 0;
}
