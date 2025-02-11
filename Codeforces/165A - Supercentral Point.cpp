#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int x[n], y[n];

	// 8
	// 1 1
	// 4 2
	// 3 1
	// 1 2
	// 0 2
	// 0 1
	// 1 0
	// 1 3

	for (int i = 0; i < n; i++)
	{
		cin >> x[i] >> y[i];
	}

	int cnt = 0;

	for (int i = 0; i < n; i++)
	{
		bool r(false), l(false), u(false), b(false);

		for (int j = 0; j < n; j++)
		{
			if (x[i] < x[j] && y[j] == y[i])
			{
				r = true;
			}
			if (x[i] > x[j] && y[j] == y[i])
			{
				l = true;
			}

			if (x[i] == x[j] && y[j] > y[i])
			{
				u = true;
			}
			if (x[i] == x[j] && y[j] < y[i])
			{
				b = true;
			}
		}
		if (r && l && u && b)
		{
			cnt++;
		}
	}

	cout << cnt;
	return 0;
}
