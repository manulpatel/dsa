#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

	int n = height.size();

	int left = 0;
	int right = n - 1;
	int maxArea = 0;

	while (left < right)
	{

		int area = (right - left) * min(height[left], height[right]);

		maxArea = max(maxArea, area);

		if (height[left] <= height[right])
		{
			left++;
		}

		else
		{
			right--;
		}
	}

	cout << maxArea;

	// First we go to max width and then try to find max area by decreasing width in hope to find greater common height.
	// O(n),O(1)

	return 0;
}
