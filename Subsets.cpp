#https://leetcode.com/problems/subsets/description/ 

class Solution {
public:
    void solve(vector<int>&nums,vector<vector<int>>&res,int n,vector<int>&up,int idx)
    {
        res.push_back(up);
        for(int i=idx;i<n;i++)
        {
        up.push_back(nums[i]);
        solve(nums,res,n,up,i+1);
        up.pop_back();
        }
       
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>up;
        solve(nums,res,nums.size(),up,0);
        return res;
    }
};
