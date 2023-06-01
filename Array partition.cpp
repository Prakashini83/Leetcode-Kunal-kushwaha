#https://leetcode.com/problems/maximum-product-of-three-numbers/description/
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=1;
        int n=nums.size()-1;
        return max(nums[0]*nums[1]*nums[n],nums[n]*nums[n-1]*nums[n-2]);
        
    }
};
