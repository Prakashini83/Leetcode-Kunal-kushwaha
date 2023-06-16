#https://leetcode.com/problems/determine-if-string-halves-are-alike/description/
class Solution {
public:
    bool halvesAreAlike(string a) {
        int c=0,d=0;
    for(int i=0;i<a.size();i++)
    {
        if(i<a.size()/2)
        {
            if(a[i] == 'a' ||a[i]  == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            {
                c++;
            }
        }
        else
        {
            if(a[i] == 'a' ||a[i]  == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            {
                d++;
            } 
        }}
        if(c==d)
        return true;
        else
        return false;
    }    
    
};
