#https://leetcode.com/problems/rank-transform-of-an-array/submissions/966531705/
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int i, j, l, r, mid;
        vector<int> rank;
       
        unordered_set<int> set(arr.begin(), arr.end());
        vector<int> sorted_arr(set.begin(), set.end());
        sort(sorted_arr.begin(), sorted_arr.end());

        for(i=0 ; i<arr.size() ; i++)
        {
            l=0, r=sorted_arr.size()-1;
            while(l<=r)
            {
                mid = (l+r)/2;
                if(sorted_arr[mid]==arr[i])
                {
                    rank.push_back(mid+1);
                    break;
                }
                else if(sorted_arr[mid]<arr[i])
                {
                    l = mid+1;
                }
                else
                {
                    r = mid-1;
                }
            }
        }
        return rank;
    }
};
