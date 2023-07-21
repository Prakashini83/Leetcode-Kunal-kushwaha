#https://leetcode.com/problems/generate-parentheses/description/
class Solution {
public:
void solve(string &up,int o,int c,int n,vector<string>&ans)
{
    if(o==0 && c==0)
    {
        ans.push_back(up);
        return;
    }
    if(o>0)
    {
    up+='(';
    solve(up,o-1,c,n,ans);
    up.pop_back();
    }
    if(c>0 && o<c)
    {
    up+=')';
    solve(up,o,c-1,n,ans);
    up.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
    string up="(";
    vector<string>ans;
    solve(up,n-1,n,n,ans);
    return ans;
    }
};
