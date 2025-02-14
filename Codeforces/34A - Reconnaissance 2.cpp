#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];

	// 5
	// 10 12 13 15 10

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	pair<int, int> p = {0, 0};

	int min = abs(arr[n - 1] - arr[0]);
	p = {n, 1};

	for (int i = 0; i < n - 1; i++)
	{
		int diff = abs(arr[i] - arr[i + 1]);
		if (diff < min)
		{
			p = {i + 1, i + 2};
			min = diff;
		}
	}
	cout << p.first << " " << p.second;

	return 0;
}
