#include<bits/stdc++.h>
using namespace std;

class MinStack 
{
    private:
        std::stack<int> stack;
        int minVal;

    public:
        MinStack() : minVal(INT_MAX) {}

        void push(int val) 
        {
            if (val <= minVal) 
            {
                stack.push(minVal);
                minVal = val;
            }
            stack.push(val);
        }

        void pop() 
        {
            if (stack.top() == minVal) 
            {
                stack.pop();
                minVal = stack.top();
            }
            stack.pop();
        }

        int top() 
        {
            return stack.top();
        }

        int getMin() 
        {
            return minVal;
        }
};
