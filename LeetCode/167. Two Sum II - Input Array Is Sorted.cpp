#include <bits/stdc++.h>
using namespace std;

int main()
{
	int numbers[] = {2, 7, 11, 15};
	int target = 9;

	int left = 0;
	int right = sizeof(numbers) / sizeof(numbers[0]) - 1;
	int sum = 0;

	while (left < right)
	{
		sum = numbers[left] + numbers[right];

		if (sum == target)
		{
			cout << left + 1 << " " << right + 1;
			break;
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

	return 0;
}
