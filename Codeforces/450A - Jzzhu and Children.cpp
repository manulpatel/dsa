#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, a = 0;
	cin >> n >> m;

	//6 4
	//1 1 2 2 3 3

	deque<pair<int, int>> q;

	for (int i = 0; i < n; i++) {
		cin >> a;
		q.push_back({i + 1, a});
	}

	while (q.size() > 1) {

		if (!(q.front().second <= m))
		{
			q.front().second -=  m;
			rotate(q.begin(), q.begin() + 1, q.end());
		}

		else {q.pop_front();}
	}

	cout << q.front().first;
	return 0;
}

