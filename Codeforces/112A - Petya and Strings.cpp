#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s1, s2;

	// s1 = "aaaa";
	// s2 = "aaaA";
	cin >> s1 >> s2;

	for (int i = 0; i < s1.size(); i++)
	{

		if (s1[i] <= 90)
		{
			s1[i] += 32;
		}
		if (s2[i] <= 90)
		{
			s2[i] += 32;
		}

		if (s1[i] > s2[i])
		{
			cout << 1;
			return 0;
		}
		if (s1[i] < s2[i])
		{
			cout << -1;
			return 0;
		}
	}

	cout << 0;

	return 0;
}
