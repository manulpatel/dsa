#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2)
{

	int i = 0, j = 0, ans = 0;
	unordered_map<char, int> mp;

	for (auto &v : s1)
	{
		mp[v]++;
	}

	int count = mp.size();

	while (j < s2.size())
	{
		// Calculations
		if (mp.find(s2[j]) != mp.end())
		{
			mp[s2[j]]--;
			if (mp[s2[j]] == 0)
			{
				count--;
			}
		}

		if ((j - i + 1) < s1.size())
		{
			j++;
		}
		else if ((j - i + 1) == s1.size())
		{
			// Ans from Calculations
			if (count == 0)
			{
				return true;
			}

			// Slide ahead
			if (mp.find(s2[i]) != mp.end())
			{
				mp[s2[i]]++;

				if (mp[s2[i]] == 1)
				{
					count++;
				}
			}

			i++;
			j++;
		}
	}

	return false;
}

int main()
{
	string s1 = "ab", s2 = "eidboaoo";
	cout << checkInclusion(s1, s2);
	return 0;
}
