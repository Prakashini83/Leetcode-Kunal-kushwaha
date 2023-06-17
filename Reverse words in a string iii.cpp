#https://leetcode.com/problems/reverse-words-in-a-string-iii/description/
class Solution {
public:
    string reverseWords(string s) {
    string ans,k,temp;
    stringstream ss(s);
    while(ss>>temp){
    reverse(temp.begin(),temp.end());
    ans+= temp+" ";
    }
    return ans.substr(0,ans.size()-1);
    }
};
