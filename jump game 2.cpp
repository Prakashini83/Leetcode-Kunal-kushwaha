class Solution {
public:
    int jump(vector<int>& nums) {
        int c=0,l=0;
        int k=0;
        int last=nums.size()-1;
        if(nums.size()==1)
        {
            return 0;
        }
        for(int i=0;i<nums.size();i++)
        {
            k=max(k,i+nums[i]);
            if(i==l)
            {
                l=k;
                c++;
            
            if(k>=last)
            return c;
        }
        }
        return c;
    }
};
