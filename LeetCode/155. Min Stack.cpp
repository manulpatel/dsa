#include <bits/stdc++.h>
using namespace std;

class MinStack
{
public:
    MinStack() {}
    stack<long long int> st;
    long long int minElement;
    void push(long int val)
    {
        if (st.empty())
        {
            st.push(val);
            minElement = val;
        }

        else
        {
            if (val <= minElement)
            {
                st.push(2 * val - minElement);
                minElement = val;
            }

            else
            {
                st.push(val);
            }
        }
    }

    void pop()
    {
        if (st.empty())
        {
            return;
        }
        else
        {
            if (st.top() < minElement)
            {
                minElement = 2 * minElement - st.top();
            }
            st.pop();
        }
    }

    int top()
    {

        if (st.top() < minElement)
        {
            return minElement;
        }

        else
        {
            return st.top();
        }
    }

    int getMin() { return minElement; }
};