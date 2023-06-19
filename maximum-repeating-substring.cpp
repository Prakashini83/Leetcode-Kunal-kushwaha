#https://leetcode.com/problems/maximum-repeating-substring/description/
class Solution {
public:
    int maxRepeating(string sequence, string word) {
    int c=0;
    string a;
    string temp=word;
    while(sequence.find(temp)!=string::npos)
        {
            c++;
            temp+=word;
        }
       
    
    return c;  
    }
};
