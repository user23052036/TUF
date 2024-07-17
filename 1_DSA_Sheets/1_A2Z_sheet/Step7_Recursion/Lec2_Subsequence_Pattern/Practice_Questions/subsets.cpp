#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        void printS(int indx, vector<int> nums, vector<int> ds, vector<vector<int>> &result, int n)
        {
            if(indx == n)
            {
                result.push_back(ds);
                return;
            }

            ds.emplace_back(nums[indx]);
            printS(indx+1,nums,ds,result,n);
            ds.pop_back();
            printS(indx+1,nums,ds,result,n);
        }

        vector<vector<int>> subsets(vector<int> &nums) 
        {
            vector<int>ds;
            vector<vector<int>>result;

            printS(0,nums,ds,result,nums.size());
            return result;
        }
};