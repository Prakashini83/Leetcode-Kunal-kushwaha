#https://leetcode.com/problems/length-of-last-word/description/
class Solution {
public:
    int lengthOfLastWord(string s) {
       string temp;
       vector<string>m;
       stringstream ss(s);
       	while(ss>>temp){
	    m.push_back(temp);
	    }
 
       int c=m.size()-1;
       return m[c].size();
    }
};
