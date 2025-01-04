#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, count = 0;
	cin >> n;

	// 3
	// RRG


	string s;
	cin >> s;

	char ch = s[0];

	for (int i = 1; i < s.size(); i++) {

		if (ch == s[i]) {count++;}
		ch = s[i];
	}

	cout << count;

	return 0;
}
