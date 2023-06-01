https://leetcode.com/problems/largest-perimeter-triangle/description/
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
    int ans=0;
    sort(nums.begin(),nums.end());
    int n=nums.size()-1;
    for(int i=n;i>=2;i--)
    {
    if(nums[i-2]+nums[i-1]>nums[i])
        {
        return nums[i-2]+nums[i-1]+nums[i];
        
        }
    }
     return 0;
    }
};
