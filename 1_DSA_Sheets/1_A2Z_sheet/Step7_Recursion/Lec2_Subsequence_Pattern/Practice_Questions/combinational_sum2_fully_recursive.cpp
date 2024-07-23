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
            if(indx >= arr.size() || arr[indx]>target) return;
            if(indx>0 && arr[indx]==arr[indx-1])
                find_combi(indx+1,target,arr,ds,ans);

            ds.push_back(arr[indx]);
            find_combi(indx+1,target-arr[indx],arr,ds,ans);
            ds.pop_back();
            find_combi(indx+1,target,arr,ds,ans);
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