#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> nums = {11, 13, 15, 17};

	int start = 0;
	int end = nums.size() - 1;

	while (start <= end)
	{

		int mid = start + (end - start) / 2;

		// To prevent out of bound access
		int next = (mid + 1) % nums.size();
		int prev = (mid - 1 + nums.size()) % nums.size();

		if (nums[mid] <= nums[prev] && nums[mid] <= nums[next])
		{
			cout << nums[mid];
			return nums[mid];
		}

		else if (nums[mid] <= nums[end])
		{
			end = prev;
		}

		else if (nums[mid] >= nums[start])
		{
			start = next;
		}
	}

	return -1;
}
