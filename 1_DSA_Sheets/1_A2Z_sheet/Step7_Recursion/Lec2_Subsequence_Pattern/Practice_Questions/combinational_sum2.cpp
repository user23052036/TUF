#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        void find_combi(int indx,int target,vector<int> arr,vector<int> &ds,vector<vector<int>> &ans)
        {
            if(target==0)
            {
                ans.push_back(ds);
                return;
            }
            for(int i=indx; i<arr.size(); i++)
            {
                if(i>indx && arr[i]==arr[i-1]) continue;
                if(arr[i]>target) break;

                ds.push_back(arr[i]);
                find_combi(i+1,target-arr[i],arr,ds,ans);
                ds.pop_back();
            }
        }
        
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
        {
            sort(candidates.begin(),candidates.end());
            vector<vector<int>>ans;
            vector<int>ds;
            find_combi(0,target,candidates,ds,ans);
            
            return ans;
        }
};