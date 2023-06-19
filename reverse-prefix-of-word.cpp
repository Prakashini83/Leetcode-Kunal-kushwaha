#https://leetcode.com/problems/reverse-prefix-of-word/description/
class Solution {
public:
    string reversePrefix(string word, char ch) {
    string rev;
    int k=word.find(ch);
    for(int i=k;i>=0;i--)
    {
        rev+=word[i];
    }    
    for(int i=k+1;i<word.size();i++)
    {
        rev+=word[i];
    } 
    return rev;
    }
};
