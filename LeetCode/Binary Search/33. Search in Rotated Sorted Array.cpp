#include <bits/stdc++.h>
using namespace std;

// Find index of the minimum (rotation point) in rotated sorted array
int findMinIndex(vector<int> &nums)
{
	int start = 0, end = nums.size() - 1;

	while (start <= end)
	{
		// If the subarray is already sorted
		if (nums[start] <= nums[end])
			return start;

		int mid = start + (end - start) / 2;
		int prev = (mid - 1 + nums.size()) % nums.size();
		int next = (mid + 1) % nums.size();

		// Check if mid is the smallest
		if (nums[mid] <= nums[prev] && nums[mid] <= nums[next])
		{
			return mid;
		}

		// Decide which half to continue
		if (nums[mid] <= nums[end])
		{
			end = mid - 1;
		}
		else
		{
			start = mid + 1;
		}
	}

	return -1;
}

// Standard binary search
int binarySearch(vector<int> &nums, int start, int end, int target)
{
	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (nums[mid] == target)
			return mid;
		if (nums[mid] < target)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return -1;
}

int main()
{
	vector<int> nums = {3, 1};
	int target = 3;

	int minIndex = findMinIndex(nums);

	if (minIndex != -1)
	{
		int leftSearch = binarySearch(nums, 0, minIndex - 1, target);
		if (leftSearch != -1)
		{
			return leftSearch;
		}
		else
		{
			return binarySearch(nums, minIndex, nums.size() - 1, target);
		}
	}

	return -1;
}
