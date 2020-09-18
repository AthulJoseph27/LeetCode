class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=INT_MAX,profit = INT_MIN;
        
        for(int i=0;i<prices.size();i++){
            if(i!=0){
                profit = max(profit,prices[i]-buy);
            }
            buy = min(buy,prices[i]);
        }
        
        return max(profit,0);
    }
};
