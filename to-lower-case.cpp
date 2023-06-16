https://leetcode.com/problems/to-lower-case/solutions/3643899/709-to-lower-case/
**Approach**
If the ith element in the string is a uppercase letter which we will check by the ascii code (if the ascii code is in between 65-90, it is uppercase), we will add 32 to it as lowercase elements have range from 97onwards, and after adding 32 , the element gets converted to lowercase element)

**Complexity**
Time complexity:O(n)
Space complexity:O(1)

**Code**

class Solution {
public:
    string toLowerCase(string s) {
     
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]+=32;
        }
    }   
    return s;
    }
};
