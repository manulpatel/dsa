#include <bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	//cin >> str;

	str = "xiaodao";

	unordered_set<char> s;


	for (int i = 0; i < str.size(); i++) {
		s.insert(str[i]);
	}

	(s.size() % 2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";


	return 0;
}
