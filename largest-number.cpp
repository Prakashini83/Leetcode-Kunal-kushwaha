#https://leetcode.com/problems/largest-number/description/
class Solution {
public:
static bool comp(string a, string b)
    {
        return a+b>b+a;
    }
    string largestNumber(vector<int>& nums) {
    string n;
    vector<string>v;
    
    for(auto x:nums)
    {
       v.push_back(to_string(x));
    }
    sort(v.begin(),v.end(),comp);
    for(auto x:v)
    {
        n+=x;
    } 
    int i=0;
    while(i<n.size()-1 && n[i]=='0')
    {
        i++;
    }
    return n.substr(i,n.size());
    }
};
