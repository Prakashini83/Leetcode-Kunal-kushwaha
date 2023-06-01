https://leetcode.com/problems/squares-of-a-sorted-array/description/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int>ans(nums.size());
    int l=0,r=nums.size()-1,i=nums.size()-1;
    while(l<=r)
    {
        int left=nums[l]*nums[l];
        int right=nums[r]*nums[r];
        if(left>=right)
        {
            ans[i]=left;
            l++;
        }
        else
        {
            ans[i]=right;
            r--;
        }
        i--;
    }return ans;
    }
};
