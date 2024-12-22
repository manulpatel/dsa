#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
 
	float orange = 0, p;
 
	for (int i = 0 ; i < n; i++) {
		cin >> p;
		orange += p;
	}
 
	cout << orange / n;
	return 0;
}