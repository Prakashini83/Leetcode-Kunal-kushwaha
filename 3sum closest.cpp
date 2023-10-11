#https://leetcode.com/problems/3sum-closest/description

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int sum=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
         if(nums.size()<3)
        {
            return 0;
        }
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {int a=nums[i]+nums[j]+nums[k];
                if(a==target)
                {j++;
                k--;
                }
                if(abs(target-a)<abs(target-sum))
                sum=a;
                if(a>target)
                {
                    k--;
                    
                }
                if(a<target)
                {
                    j++;
                    
                }
            }

        }
        return sum;

    }
};
