#include <bits/stdc++.h>
using namespace std;

bool canEatAll(vector<int> &piles, int mid, int h)
{
	long long int hours = 0;
	for (int i = 0; i < piles.size(); i++)
	{
		hours += ceil((double)piles[i] / mid);
	}
	return hours <= h;
}

int main()
{
	vector<int> piles = {805306368, 805306368, 805306368};
	int h = 1000000000;

	int minSpeed = 1;
	int maxSpeed = *max_element(piles.begin(), piles.end());
	int ans = 0;

	while (minSpeed <= maxSpeed)
	{

		int mid = minSpeed + (maxSpeed - minSpeed) / 2;

		if (canEatAll(piles, mid, h))
		{
			ans = mid;
			maxSpeed = mid - 1;
		}
		else
		{
			minSpeed = mid + 1;
		}
	}

	cout << ans;

	return 0;
}
