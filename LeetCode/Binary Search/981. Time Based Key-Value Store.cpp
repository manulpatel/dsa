#include <bits/stdc++.h>
using namespace std;

class TimeMap
{
public:
	unordered_map<string, vector<pair<int, string>>> ump;
	TimeMap() {}
	void set(string key, string value, int timestamp)
	{
		ump[key].push_back({timestamp, value});
	}

	string get(string key, int timestamp)
	{
		int left = 0;
		int right = ump[key].size() - 1;
		string ans = "";

		while (left <= right)
		{
			int mid = left + (right - left) / 2;

			if (ump[key][mid].first > timestamp)
			{
				right = mid - 1;
			}
			else
			{
				ans = ump[key][mid].second;
				left = mid + 1;
			}
		}
		return ans;
	}
};

int main()
{
	return 0;
}
