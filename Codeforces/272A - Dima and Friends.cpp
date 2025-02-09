#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	// 5
	// 4 4 3 5 1

	int sum = 0, fingers;

	for (int i = 0; i < n; i++) {
		cin >> fingers;
		sum += fingers;
	}

	int ways = 0;

	for (int i = 1; i <= 5; i++) {
		if ((sum + i) % (n + 1) != 1) {
			ways++;
		}
	}
	cout << ways;
	return 0;
}
