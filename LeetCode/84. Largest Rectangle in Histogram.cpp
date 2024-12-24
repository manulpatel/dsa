#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> heights = {2, 1, 5, 6, 2, 3};
	int n = heights.size();

	// NSL
	vector<int> nsl;
	stack<pair<int, int>> left;

	int pseudo_index = -1;

	for (int i = 0; i < n; i++)
	{
		if (left.empty())
		{
			nsl.push_back(pseudo_index);
		}

		else if (!left.empty() && left.top().first < heights[i])
		{
			nsl.push_back(left.top().second);
		}

		else if (!left.empty() && left.top().first >= heights[i])
		{
			while (!left.empty() && left.top().first >= heights[i])
			{
				left.pop();
			}

			if (left.empty())
			{
				nsl.push_back(pseudo_index);
			}
			else
			{
				nsl.push_back(left.top().second);
			}
		}

		left.push({heights[i], i});
	}

	// NSR
	vector<int> nsr;
	stack<pair<int, int>> right;

	pseudo_index = n;

	for (int i = n - 1; i >= 0; i--)
	{
		if (right.empty())
		{
			nsr.push_back(pseudo_index);
		}

		else if (!right.empty() && right.top().first < heights[i])
		{
			nsr.push_back(right.top().second);
		}

		else if (!right.empty() && right.top().first >= heights[i])
		{
			while (!right.empty() && right.top().first >= heights[i])
			{
				right.pop();
			}

			if (right.empty())
			{
				nsr.push_back(pseudo_index);
			}
			else
			{
				nsr.push_back(right.top().second);
			}
		}

		right.push({heights[i], i});
	}

	reverse(nsr.begin(), nsr.end());

	// Width = NSR index - NSL index - 1
	// Area = height * width

	vector<int> area(n);

	for (int i = 0; i < n; i++)
	{
		area[i] = (nsr[i] - nsl[i] - 1) * heights[i];
	}

	cout << *max_element(area.begin(), area.end());

	return 0;
}
