#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, a;
	cin >> n >> a;

	int min = a, max = a, count = 0;

	for (int i = 1; i < n; i++)
	{

		int score;
		cin >> score;

		if (score > max)
		{
			max = score;
			count++;
		}
		else if (score < min)
		{
			min = score;
			count++;
		}
	}

	cout << count;
	return 0;
}
