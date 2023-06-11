https://leetcode.com/problems/set-mismatch/description/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>n;
        unordered_map<int,int>m;
        for(int i=1;i<=nums.size();i++)
        {
            m[i]=0;
        }
        for(auto &i:nums)
        {
            m[i]++;
        }
        for(auto &x:m)
         {   if(x.second==2)
            {
            n.push_back(x.first);
            break;
            }
        }
        for(auto &i:m)
        {
            if(i.second==0)
            n.push_back(i.first);
            
        }
        return n;
    }
};
