#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a1, a2, a3;
	// 4 6 6

	cin >> a1 >> a2 >> a3;

	int c = sqrt(a2 * a3 / a1);
	int a = a3 / c;
	int b = a1 / a;

	cout << 4 * (a + b + c);

	return 0;
}
