#https://leetcode.com/problems/group-anagrams/description
For each string, create a copy called sortedStr and sort its characters in ascending order using the sort function. This step ensures that anagrams have the same sorted representation.
Use the sorted string sortedStr as the key in the groups map.
If the key doesn't exist in the map, a new entry is automatically created with an empty vector as the value. If the key already exists, the corresponding vector is accessed.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     vector<vector<string>>ans;
    unordered_map<string,vector<string>>m;
    for(auto i:strs)
    {    string x=i;
        sort(i.begin(),i.end());
        m[i].push_back(x);// we will use the sorted element as the key and add the original string and other anagrams to that key as value.
    }
    for(auto i:m)
    {
        ans.push_back(i.second);
    }
    return ans;
    }
};
