//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution 
{
  public:
  
    void printF(int indx, vector<int> &arr, int n, int sum, vector<int> &res)
    {
        if(indx == n)
        {
            res.emplace_back(sum);
            return;
        }

        //pick method
        sum += arr[indx];
        printF(indx+1,arr,n,sum,res);
        sum -= arr[indx];

        //not pick condition
        printF(indx+1,arr,n,sum,res);
    }
    vector<int> subsetSums(vector<int> arr, int n) 
    {
        int sum=0;
        vector<int>res;
        printF(0,arr,n,sum,res);
        
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends