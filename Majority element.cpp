#https://leetcode.com/problems/majority-element/description/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            
            if(c==0)
            {
                candidate=nums[i];
                c+=1;
            }
            else if(candidate==nums[i])
            {
                c++;
            }
            else
            {
                c--;
            }
        }
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==candidate)
            k++;
        }
        if(k>(nums.size()/2))
        return candidate;
        else
        return -1;
    }
};
