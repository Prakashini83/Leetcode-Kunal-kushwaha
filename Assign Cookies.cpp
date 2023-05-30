#https://leetcode.com/problems/assign-cookies/description/
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end()); 
   int sizeG = g.size(), sizeS = s.size(), i, j, lastJ=0, count=0,found;
    for(i = 0; i < sizeG; ++i) {
        for(j = lastJ, found=0; j < sizeS; ++j) {
            if (s[j] >= g[i]) {
                ++count;
                lastJ=j+1;
                found = 1;
                break;
            }
        }
        if(found == 0) {
            break;
        }
    }
    return count;
}};
