#https://leetcode.com/problems/subsets/description/

class Solution {
public:
    void solve(vector<int>&nums,vector<vector<int>>&res,int i,int n,vector<int>up)
    {
        if(i==n)
        {
            res.push_back(up);
            return;
        }
        up.push_back(nums[i]);
        solve(nums,res,i+1,n,up);
        up.pop_back();
        solve(nums,res,i+1,n,up);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>up;
        solve(nums,res,0,nums.size(),up);
        return res;
    }
};
