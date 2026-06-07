class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 0 , j = i+1 ;

        int profit = 0 ; 
        int mx = 0;

        while(j < prices.size()){
            profit = prices[j] - prices[i];
            mx =  max(mx,profit);

            if(prices[i] > prices[j]){
                i = j;
                j++;
            }
            else{
                j++;
            }
        }
        return mx;
    }
};
