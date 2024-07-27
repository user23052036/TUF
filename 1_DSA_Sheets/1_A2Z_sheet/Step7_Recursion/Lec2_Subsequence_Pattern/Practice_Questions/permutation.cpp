#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
        void permutation(vector<int>nums, vector<int>ds,vector<vector<int>>&result,unordered_map<int,int>&ump)
        {
            if(ds.size() == nums.size())
            {
                result.emplace_back(ds);
                return;
            }

            for(int i=0; i<nums.size(); i++)
            {
                if(!ump[nums[i]])
                {
                    ds.emplace_back(nums[i]);
                    ump[nums[i]]++;
                    permutation(nums,ds,result,ump);
                    ump[nums[i]]--;
                    ds.pop_back();
                }
            }
        }

        vector<vector<int>> permute(vector<int>& nums) 
        {
            unordered_map<int,int>ump;
            vector<int>ds;
            vector<vector<int>>result;

            permutation(nums,ds,result,ump);
            return result;
        }
};