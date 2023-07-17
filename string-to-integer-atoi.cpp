#https://leetcode.com/problems/string-to-integer-atoi/description/
class Solution {
public:
    int myAtoi(string s) {
    int k=0;
    int sign=0;
    int i=0;
    while(s[i]==' ')
    {
        i++;
    }
       if(s[i]=='-' && s[i+1]=='+')
            {sign=1;
            i=i+2;}
            else if(s[i]=='+' && s[i+1]=='-')
            {sign=1;
            i=i+2;}
            else if(s[i]=='-')
            {sign=2;
            i=i+1;}
            else if(s[i]=='+')
            {sign=3;
            i+=1;}
            else
            sign==4;
        
    
    double ans=0;
    while(i<s.size() && (s[i]>='0' && s[i]<='9'))
        {
            ans=ans*10+(s[i]-'0');
            i++;
        }
    
    if(sign==2)
    ans=-ans;
    if(sign==1)
    return 0;
    else
    ans= ans;
    if(ans>INT_MAX)
    ans=INT_MAX;
    if(ans<INT_MIN)
    ans=INT_MIN;
    return int(ans);
    }
};
