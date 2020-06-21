class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<=1) return 0;
        
        int profit=0,buy=INT_MAX;
        bool hasStock=false;
        for(int i=0;i<prices.size()-1;i++){
            if(prices[i]>prices[i+1]){
                if(hasStock){
                    profit = max(profit,prices[i]-buy);
                    hasStock = false;
                }
            }else{
                buy = min(prices[i],buy);
                hasStock = true;
            }
        }
        return max(profit,prices[prices.size()-1]-buy);
    }
};
