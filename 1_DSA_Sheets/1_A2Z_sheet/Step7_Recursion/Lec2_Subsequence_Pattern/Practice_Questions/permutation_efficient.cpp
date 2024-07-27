#include<bits/stdc++.h>
using namespace std;

class Solution 
{
    private:
        void swap(vector<int>&nums, int i, int j)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
        }
        void permutation(int indx, vector<int>&nums, vector<vector<int>>&ans)
        {
            if(indx==nums.size())
            {
                ans.emplace_back(nums);
                return;
            }

            for(int i=indx; i<nums.size(); i++)
            {
                swap(nums,indx,i);
                permutation(i+1,nums,ans);
                swap(nums,indx,i);
            }
        }
    public:
        vector<vector<int>> permute(vector<int>& nums) 
        {
            vector<vector<int>>ans;

            permutation(0,nums,ans);
            return ans;   
        }
};