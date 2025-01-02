#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, a, b;

	// 4
	// 0 3
	// 2 5
	// 4 2
	// 4 0

	cin >> n;
	int passengers = 0, capacity = INT_MIN;

	for (int i = 0; i < n; i++)
	{

		cin >> a >> b;

		passengers = passengers - a + b;

		capacity = max(capacity, passengers);
	}

	cout << capacity;

	return 0;
}
