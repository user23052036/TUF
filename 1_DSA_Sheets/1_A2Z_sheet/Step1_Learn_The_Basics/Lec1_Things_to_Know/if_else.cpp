//link to the problem
// https://www.geeksforgeeks.org/problems/java-if-else-decision-making0924/0?category%255B%255D=Java&difficulty%255B%255D=-2&page=1&query=category%255B%255DJavadifficulty%255B%255D-2page1category%255B%255DJava

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution 
{
  public:
    string compareNM(int n, int m)
    {
        if(m == n) return "equal";
        return (n > m) ? "greater" : "lesser";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        Solution obj;
        cout << obj.compareNM(n, m) << "\n";
    }
    return 0;
}
// } Driver Code Ends
