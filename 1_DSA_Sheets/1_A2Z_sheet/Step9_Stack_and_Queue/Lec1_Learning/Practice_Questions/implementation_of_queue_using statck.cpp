#include<bits/stdc++.h>
using namespace std;

class MyQueue 
{
    public:
        stack<int>input,output;
        MyQueue() {}
        
        void push(int x) 
        {
            input.push(x);
        }
        
        int pop() 
        {
            if(!output.empty())
            {
                int pop_element = output.top();
                output.pop();
                return pop_element;
            }    
            else
            {
                while(!input.empty())
                {
                    output.push(input.top());
                    input.pop();
                }
                int pop_element = output.top();
                output.pop();
                return pop_element; 
            }
        }
        
        int peek() 
        {
            if(!output.empty())
                return output.top();  
            else
            {
                while(!input.empty())
                {
                    output.push(input.top());
                    input.pop();
                }
                return output.top(); 
            }        
        }
        
        bool empty() 
        {
            if(!input.empty() || !output.empty()) return false;
            else return true;

        }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */