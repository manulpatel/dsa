#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    s = "([[]]])";
    // cin >> s;

    stack<char> stk;

    for (int i = 0; i < s.size(); i++)
    {

        if ((s[i] == ')' || s[i] == ']' || s[i] == '}') && !stk.empty())
        {
            switch (s[i])
            {
            case ')':
                if (stk.top() == '(')
                {
                    stk.pop();
                    break;
                }
                else
                {
                    cout << 0;
                    return 0;
                }
            case ']':
                if (stk.top() == '[')
                {
                    stk.pop();
                    break;
                }
                else
                {
                    cout << 0;
                    return 0;
                }
            case '}':
                if (stk.top() == '{')
                {
                    stk.pop();
                    break;
                }
                else
                {
                    cout << 0;
                    return 0;
                }
            }
        }

        else
        {
            stk.push(s[i]);
        }
    }

    (stk.empty()) ? cout << 1 : cout << 0;
    return (stk.empty() ? 1 : 0);
}

