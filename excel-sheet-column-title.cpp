#https://leetcode.com/problems/excel-sheet-column-title/description/
class Solution {
public:
    string convertToTitle(int n) {
    string k;
    while(n>0)
    {
    n--;
    int c=n%26;
    n=n/26;
    k+=c+'A';
    } 
    reverse(k.begin(),k.end());
    return k;
    }
};
