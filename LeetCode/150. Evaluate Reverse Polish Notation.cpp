#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<string> v;
    // v = {"2", "1", "+", "3", "*"};
    // v = {"4", "13", "5", "/", "+"};
    v = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};

    stack<int> s;
    int a, b;

    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == "+" || v[i] == "*" || v[i] == "-" || v[i] == "/")
        {
            b = s.top();
            s.pop();
            a = s.top();
            s.pop();

            if (v[i] == "+")
            {
                s.push(a + b);
            }
            else if (v[i] == "-")
            {
                s.push(a - b);
            }
            else if (v[i] == "*")
            {
                s.push(a * b);
            }
            else if (v[i] == "/")
            {
                s.push(a / b);
            }
        }
        else
        {
            s.push(stoi(v[i]));
        }
    }
    cout << s.top();
    return 0;
}
