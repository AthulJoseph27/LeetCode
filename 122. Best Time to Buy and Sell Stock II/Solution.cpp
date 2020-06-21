class Solution {
public:
    int maxProfit(vector<int>& prices) {
        bool hasStock = false;
        int profit=0;
        for(int i=0;i<prices.size()-1;i++){
            if(hasStock){
                if(prices[i]>prices[i+1]){
                    hasStock = false;
                    profit+=prices[i];
                }
            }else{
                if(prices[i]<prices[i+1]){
                    hasStock = true;
                    profit-=prices[i];
                }
            }
        }
        if(hasStock) profit+=prices[prices.size()-1];
        return max(0,profit);
    }
};
