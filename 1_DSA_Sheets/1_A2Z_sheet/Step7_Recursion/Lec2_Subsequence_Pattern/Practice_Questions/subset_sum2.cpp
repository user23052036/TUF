#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        bool cheaker(vector<int>ds, vector<vector<int>>result)
        {
            for(auto it: result)
                if(ds == it) return true;
            return false;
        }

        void printS(int indx, vector<int> nums, vector<int> ds, vector<vector<int>> &result, int n)
        {
            if(indx == n)
            {
                result.push_back(ds);
                return;
            }

            ds.emplace_back(nums[indx]);
            if(cheaker(ds,result) == false)
                printS(indx+1,nums,ds,result,n);
            ds.pop_back();
            printS(indx+1,nums,ds,result,n);
        }

        vector<vector<int>> subsetsWithDup(vector<int> &nums) 
        {
            sort(nums.begin(),nums.end());
            vector<int>ds;
            vector<vector<int>>result;
            printS(0,nums,ds,result,nums.size());

            return result;
        }
};