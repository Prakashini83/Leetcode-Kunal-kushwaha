#https://leetcode.com/problems/roman-to-integer/description/
class Solution ,{
public:
    int romanToInt(string s) {
    int c=0;
    unordered_map<char,int>m;
    m.insert({'I',1});
    m.insert({'V',5});
    m.insert({'X',10});
    m.insert({'L',50});
    m.insert({'C',100});
    m.insert({'M',1000});
    m.insert({'D',500});
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='I' && (i + 1) < s.size() && (s[i+1]=='V'||s[i+1]=='X'))
        {
            if(s[i+1]=='V')
            {c+=4;
            i++;}
            else
            {c+=9;
            i++;}
            

        }
        else if(s[i]=='X'  && (i + 1) < s.size() && (s[i+1]=='L'||s[i+1]=='C'))
        {
            if(s[i+1]=='L')
            {c+=40;
            i++;}
            else
            {c+=90;
            i++;}
        }
       else if(s[i]=='C' && (i + 1) < s.size() && (s[i+1]=='D'||s[i+1]=='M'))
        {
            if(s[i+1]=='D')
            {c+=400;
            i++;}
            else
            {c+=900;
            i++;}
        }
        else
        c+=m[s[i]];
    }
    return c;
        
    }
};
