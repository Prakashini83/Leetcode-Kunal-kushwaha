#https://leetcode.com/problems/count-items-matching-a-rule/description/
class Solution {
public:
    int countMatches(vector<vector<string>>& items, string y, string x) {
        int c=0;
        for(int i=0;i<items.size();i++)
        {
        if(y=="type")
        {
            if(items[i][0]==x)
            c++;
        }
        else if(y=="color")
        {
            if(items[i][1]==x)
            c++;
        }
        else
        {
            if(items[i][2]==x)
            c++;
        }
        }
        return c;
        
    }
};
