https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/description/
class Solution {
public:
    int maxProduct(vector<int>& nums) {
priority_queue <int> m;
        for(auto x:nums)
        {
            m.push(x);
        }
        int k=1;
        k*=m.top()-1;
        m.pop();
        k*=m.top()-1;
        return k;;
    }
};
