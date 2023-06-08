#https://leetcode.com/problems/relative-sort-array/
class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
    map<int,int>m;
    for(auto i:arr1)
    {
        m[i]++;
    }    
    vector<int>k;
    for(auto i:arr2)
    {
        if(m.find(i)!=m.end())
        {
        auto temp=m.find(i);
        int c=temp->second;
        k.insert(k.end(),c,i);
        m.erase(temp);

        }
    }
    for(auto x:m)
    {
        int c=x.second;
        k.insert(k.end(),c,x.first);
    }
    return k;
    }
}
