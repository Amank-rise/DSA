class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buystock = prices[0], maxp = 0;
        for(int i= 0;i<prices.size();i++){
            if(prices[i]> buystock){
                maxp = max(maxp , prices[i]- buystock);

            }  buystock = min( buystock,prices[i]);
        }return maxp;

    }
};