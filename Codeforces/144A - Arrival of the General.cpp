#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int min = INT_MAX, max = INT_MIN;
	int minI, maxI;

	for (int i = 1; i <= n; i++)
	{
		int a;
		cin >> a;

		if (a > max)
		{
			max = a;
			maxI = i;
		}
		if (a <= min)
		{
			min = a;
			minI = i;
		}
	}

	if (maxI < minI)
	{
		cout << maxI - 1 + n - minI;
	}
	else
	{
		cout << maxI - 1 + n - minI - 1;
	}

	return 0;
}
