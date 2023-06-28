#https://leetcode.com/problems/binary-search/description/
class Solution {
public:
    int search(vector<int>& nums, int target) {
    int c=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
    if(c<nums.size() && nums[c]==target)
    return c;
    else
    return -1;
    
    }
};
