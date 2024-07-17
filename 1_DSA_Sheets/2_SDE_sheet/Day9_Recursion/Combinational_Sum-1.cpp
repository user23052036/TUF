// the main thing about it is that each numbers can be repeated multiple times

#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        void printC(int indx,int k,vector<int>candidates,vector<int>ds,vector<vector<int>> &result,int n)
        {            
            if(k == 0)
            {
                result.emplace_back(ds);
                return;
            }
            if(n == indx) return;

            if(k-candidates[indx] >= 0)
            {
                ds.emplace_back(candidates[indx]);
                printC(indx,k-candidates[indx],candidates,ds,result,n);
                ds.pop_back();
            }
            printC(indx+1,k,candidates,ds,result,n);
        }

        vector<vector<int>> combinationSum(vector<int> &candidates, int target) 
        {
            vector<int>ds;
            vector<vector<int>> result;

            printC(0,target,candidates,ds,result,candidates.size());
            return result;
        }
};