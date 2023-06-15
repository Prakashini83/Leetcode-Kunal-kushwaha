#https://leetcode.com/problems/find-all-duplicates-in-an-array/description/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
      unordered_map<int,int>m;
      vector<int>l;
      for(auto x:nums)
      {
          m[x]++;
      }
      for(auto i:m)
      {
          if(i.second==2)
          l.push_back(i.first);
      }
      return l;
        
    }
};
