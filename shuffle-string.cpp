#https://leetcode.com/problems/shuffle-string/description/
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    int n=indices.size();
    string ans=s;
    
    for(int i=0;i<n;i++)
    {
       s[indices[i]]=ans[i];
    }
   
    return s;
       
    }
};
