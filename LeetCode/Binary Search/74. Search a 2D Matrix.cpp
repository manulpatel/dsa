#include <bits/stdc++.h>
using namespace std;

bool binSearch(vector<int> &nums, int target)
{
	int start = 0;
	int end = nums.size() - 1;

	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (nums[mid] == target)
		{
			return true;
		}
		else if (nums[mid] < target)
		{
			start = mid + 1;
		}

		else
		{
			end = mid - 1;
		}
	}

	return false;
}

bool searchMatrix(vector<vector<int>> &matrix, int target)
{

	int start = 0;
	int end = matrix.size() - 1;
	int n = matrix[0].size() - 1;

	while (start <= end)
	{
		int mid = start + (end - start) / 2;

		if (matrix[mid][0] > target)
		{
			end = mid - 1;
		}

		else if (matrix[mid][n] < target)
		{
			start = mid + 1;
		}

		else
		{
			return binSearch(matrix[mid], target);
		}
	}

	return false;
}

int main()
{
	vector<vector<int>> matrix = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
	int target = 3;

	cout << searchMatrix(matrix, target);

	return 0;
}
