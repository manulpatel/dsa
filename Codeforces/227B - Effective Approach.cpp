#include <bits/stdc++.h>
using namespace std;

vector<int> vasya(100001);
vector<int> petya(100001);

int main()
{
	// 2
	// 1 2
	// 1
	// 1

	int n, m, a;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		vasya[a - 1] = i;
		petya[a - 1] = n - i + 1;
	}

	cin >> m;
	long long int v = 0, p = 0;

	for (int j = 1; j <= m; j++)
	{
		cin >> a;

		v += vasya[a - 1];
		p += petya[a - 1];
	}

	cout << v << " " << p;
	return 0;
}
