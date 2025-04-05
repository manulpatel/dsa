#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};

	int n = height.size();

	int mxl[n];
	int mxr[n];

	mxl[0] = height[0];

	for (int i = 1; i < n; i++)
	{
		mxl[i] = max(height[i], mxl[i - 1]);
	}

	mxr[n - 1] = height[n - 1];

	for (int i = n - 2; i >= 0; i--)
	{
		mxr[i] = max(height[i], mxr[i + 1]);
	}

	int water[n];
	int trapped = 0;

	for (int i = 0; i < n; i++)
	{
		water[i] = min(mxl[i], mxr[i]) - height[i];
		trapped += water[i];
	}

	cout << trapped;

	// We try to find taller buildings on adjacent sides.
	// We calculate water stored on top of each building. Then add it up.
	return 0;
}
