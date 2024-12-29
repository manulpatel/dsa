#include <bits/stdc++.h>
using namespace std;

int main()
{
	set<int> s;

	int i = 5, a;

	while (i--)
	{
		cin >> a;

		s.insert(a);
	}

	cout << 4 - s.size();

	// int arr[4] = {1, 2, 3, 3}, cnt = 0;

	// for (int k = 0; k < 3; k++) {
	// 	if (arr[k] != arr[k + 1]) {
	// 		cnt++;
	// 	}
	// }

	// cout << 3 - cnt;

	return 0;
}
