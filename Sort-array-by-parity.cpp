https://leetcode.com/problems/sort-array-by-parity/description/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int>ans;
        vector<int>odd;
        if(nums.size()==0)
        return nums;
        else
        {
           
           for(int i=0;i<nums.size();i++)
           {
               if(nums[i]%2==0)
               ans.push_back(nums[i]);
               else
               odd.push_back(nums[i]);
           }
           ans.insert(ans.end(),odd.begin(),odd.end());
           
        }return ans;
    }
};
