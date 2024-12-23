#include <bits/stdc++.h>
using namespace std;

void generateValidParen(int open, int close, string op, vector<string> &v)
{
    // base condition
    if (open == 0 && close == 0)
    {
        v.push_back(op);
        return;
    }

    if (open != 0)
    {
        generateValidParen(open - 1, close, op + '(', v);
    }

    if (close > open)
    {
        generateValidParen(open, close - 1, op + ')', v);
    }
}
int main()
{
    int n;
    // cin >> n;
    n = 3;

    vector<string> v;
    int open = n, close = n;
    string op = "";

    generateValidParen(open, close, op, v);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}
