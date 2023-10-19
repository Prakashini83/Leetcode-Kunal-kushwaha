class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;
        int i=INT_MAX;

        for(int j=0;j<prices.size();j++)
        {
            i=min(prices[j],i);
            int k=prices[j]-i;
            p=max(k,p);
            
        
        }
        
        return p;
    }
};
