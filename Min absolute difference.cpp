#https://leetcode.com/problems/minimum-absolute-difference/
class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>k;
       
        sort(arr.begin(),arr.end());
        int m=0,ans=0;
        int diff=arr[1]-arr[0];
        for(int i=1;i<arr.size();i++)
        {
            
           int d=arr[i]-arr[i-1];
            if(d<diff)
            {
                diff=d;
                k.clear();
            }
            if(d==diff)
            {
                k.push_back({arr[i-1],arr[i]});
            }
        }
        return k;
        
    }
};
