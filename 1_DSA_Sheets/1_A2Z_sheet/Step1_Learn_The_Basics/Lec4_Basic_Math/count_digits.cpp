//link to problem
// https://www.geeksforgeeks.org/problems/count-digits5716/1

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int evenlyDivides(int N)
    {
        int count=0,temp=N;
        while(N != 0)
        {
            if(N%10 != 0)
                if(temp%(N%10) == 0)
                    count++;
            N=N/10;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends