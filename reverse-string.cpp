#https://leetcode.com/problems/reverse-string/description/
class Solution {
public:
    void reverseString(vector<char>&str) {
    return rev(str,0,str.size()-1);
    }
    void rev(vector<char>&str,int s,int e)
    {
    if(s>=e)
    {
        return;
    }   
    char temp=str[s];
    str[s]=str[e];
    str[e]=temp;
    rev(str,s+1,e-1);
    }

};
