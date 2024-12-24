#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> position = {10, 8, 0, 5, 7};
	vector<int> speed = {2, 4, 1, 1, 3};
	int target = 12;

	int n = position.size();
	vector<pair<int, double>> cars(n);

	for (int i = 0; i < n; i++)
	{
		double time = (target - position[i]) / (double)speed[i];

		cars[i] = {position[i], time};
	}

	sort(cars.begin(), cars.end());

	stack<double> fleetTimes;
	for (int i = n - 1; i >= 0; i--)
	{
		if (fleetTimes.empty() || fleetTimes.top() < cars[i].second)
		{

			fleetTimes.push(cars[i].second);
		}
	}

	cout << fleetTimes.size();

	return 0;
}
