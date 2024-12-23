#include <bits/stdc++.h>
using namespace std;

int main()
{
	int temperatures[] = {30, 40, 50, 60};
	int n = sizeof(temperatures) / sizeof(temperatures[0]);

	stack<int> s;
	vector<int> v(n, 0);

	for (int i = n - 1; i >= 0; i--)
	{
		while (!s.empty() && (temperatures[s.top()] <= temperatures[i]))
		{
			s.pop();
		}

		if (!s.empty())
		{
			v[i] = s.top() - i;
		}

		s.push(i);
	}

	for (int i = 0; i < n; i++)
	{
		cout << v[i] << endl;
	}

	return 0;
}
