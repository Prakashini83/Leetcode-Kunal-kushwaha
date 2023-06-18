#https://leetcode.com/problems/valid-palindrome/description/
class Solution {
public:
    bool isPalindrome(string s) {
    if(s=="")
    return true;
    string ans,rev;
   for (int i = 0; i < s.size(); i++) 
    {char temp = s[i];
    
	    if(isalnum(temp))
        {ans+= tolower(temp);}
	}
    for(int i=ans.size()-1;i>=0;i--)
    {
        rev+=ans[i];
    }
    if(rev==ans)
    return true;
    else
    return false;
   
    }
};
