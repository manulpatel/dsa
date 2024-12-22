#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int damaged = 0;

    while (d)
    {
        if (((d % k) == 0) || ((d % l) == 0) || ((d % m) == 0) || ((d % n) == 0))
        {
            damaged++;
        }

        d--;
    }

    cout << damaged;
    return 0;
}