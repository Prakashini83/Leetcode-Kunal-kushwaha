#https://leetcode.com/problems/first-missing-positive/description/
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
     map<int,int>m;
     for(int i=1;i<nums.size()+1;i++)
     {
        m[i]=0;
     }
     for(auto i:nums)
     {
        if(i>0)
        {
            m[i]=1;
        }
     }   
     for(auto i:m)
     {
        if(i.second==0 && i.first>0)
        return i.first;
     }
     return nums.size()+1;

    }
};
