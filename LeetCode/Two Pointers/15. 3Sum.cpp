#include <bits/stdc++.h>
using namespace std;

int main()
{
	int numbers[] = {-1, 0, 1, 2, -1, -4};
	int target = 0;

	int n = sizeof(numbers) / sizeof(numbers[0]);
	int sum = 0;

	sort(numbers, numbers + n);
	vector<vector<int>> v;

	for (int i = 0; i < n; i++)
	{

		if (i > 0 && numbers[i] == numbers[i - 1])
		{
			continue;
		}
		int left = i + 1;
		int right = n - 1;

		while (left < right)
		{

			sum = numbers[left] + numbers[right] + numbers[i];

			if (sum == target)
			{
				cout << numbers[i] << " " << numbers[left] << " " << numbers[right] << endl;
				vector<int> temp = {numbers[i], numbers[left], numbers[right]};
				v.push_back(temp);
				left++;
				right--;

				while (left < right && numbers[left] == numbers[left - 1])
				{
					left++;
				}
				while (left < right && numbers[right] == numbers[right + 1])
				{
					right--;
				}
			}

			else if (sum < target)
			{
				left++;
			}

			else
			{
				right--;
			}
		}
	}

	return 0;
}
