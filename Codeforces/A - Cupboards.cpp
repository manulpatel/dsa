#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    bool left, right;

    cin >> n;

    int leftClosed = 0;
    int rightClosed = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> left >> right;
        if (left == 0)
        {
            leftClosed++;
        }

        if (right == 0)
        {
            rightClosed++;
        }
    }

    cout << min(leftClosed, n - leftClosed) + min(rightClosed, n - rightClosed);
    return 0;
}