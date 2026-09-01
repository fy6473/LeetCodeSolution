class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // time complexity(O(n)).
        int n=prices.size();
        int minimal=prices[0];
        int profit=0;
        for(int i=0;i<n;i++){
            int cost=prices[i]-minimal;
            profit=max(profit,cost);
            minimal=min(minimal,prices[i]);
        }
        return profit;
    }
};