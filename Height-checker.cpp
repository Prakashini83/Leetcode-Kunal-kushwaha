#https://leetcode.com/problems/height-checker/
class Solution {
public:
    int heightChecker(vector<int>& h) {
    vector<int>e;
    int c=0;
    vector<int>h1;
    h1=h;
    sort(h1.begin(),h1.end());
    for(auto i:h1)
    {
        e.push_back(i);
    }
    for(int i=0;i<h.size();i++)
    {
        if(h[i] != e[i])
        c++;
    }
    return c;
    }
};
