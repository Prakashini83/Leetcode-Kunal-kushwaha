https://leetcode.com/problems/sort-array-by-parity-ii/description/
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>ans(nums.size());
        int c=0,o=1;;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0 )
            {
                ans[c]=nums[i];
                c+=2;
            }
            else
            {
                ans[o]=nums[i];
                o+=2;
            }

        }
        return ans;
    }
};
