#https://leetcode.com/problems/merge-intervals/description/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
    vector<vector<int>>a;
     sort(intervals.begin(),intervals.end());
     int n=intervals.size();
     for(int i=0;i<n;i++)
     {
        if(a.empty())
        {
            a.push_back(intervals[i]);
        }
        else
        {         
            int y=a.back()[1];    
            if(intervals[i][0]<=y)
            {
                a.back()[1]=max(y,intervals[i][1]);
            }
            else
            {
                a.push_back(intervals[i]);
            }
        }
     }
     return a; 
    }
};
