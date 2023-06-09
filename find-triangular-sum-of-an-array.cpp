#https://leetcode.com/problems/find-triangular-sum-of-an-array/solutions/
class Solution {
public:
    int triangularSum(vector<int>& nums) {
        // 1st intution - Recursion - ek case solve karle baki recursion dekh lega
        if(nums.size()==1)
            return nums[0];
        
        vector<int> temp;

        for(int i=0;i<nums.size()-1;i++)
            temp.push_back((nums[i]+nums[i+1])%10);
            
        return triangularSum(temp);
    }
};
