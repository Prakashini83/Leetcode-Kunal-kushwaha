#https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/description/
class Solution {
public:
    bool checkOnesSegment(string s) 
{
    if(s.find("01")!=string::npos)
        {
            return false;
        }
    
    return true;  
    }
}; 
