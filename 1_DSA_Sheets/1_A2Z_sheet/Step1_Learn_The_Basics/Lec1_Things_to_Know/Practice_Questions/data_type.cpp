//link to problem below
// https://www.geeksforgeeks.org/problems/data-type-1666706751/1

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


// } Driver Code Ends
// User function Template for C++

class Solution 
{
  public:
    int dataTypeSize(string str) 
    {
        if(str[0] == 'C') return 1;
        else if(str[0] == 'I') return 4;
        else if(str[0] == 'L') return 8;
        else if(str[0] == 'F') return 4;
        else if(str[0] == 'D') return 8;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        Solution ob;
        cout << ob.dataTypeSize(str);
        cout << "\n";
    }
    return 0;
}