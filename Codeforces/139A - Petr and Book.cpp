#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	// 4
	// 1 0 0 0 0 0 1

	// 100
	// 15 20 20 15 10 30 45

	// 2
	// 1 0 0 0 0 0 0

	int arr[7];

	for (int i = 0; i < 7; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < 7; i++)
	{
		n -= arr[i];
		if (n <= 0)
		{
			cout << i + 1 << endl;
			break;
		}
		if (i == 6)
			i = -1;
	}

	// int t = a[0];

	// while (t < n)
	// {
	//     i++;
	//     i %= 7;
	//     t += a[i];
	// }

	// cout << i + 1 << endl;
	return 0;
}
