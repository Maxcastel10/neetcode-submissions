class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int maxp=0;
            int l=0;
            int r=1;
            while(r<prices.size()){
                if(prices[l]>prices[r]){
                    l=r;
                }else{
                    maxp=max(maxp,prices[r]-prices[l]);
                }
                r++;
            }
            return maxp;
        }
};
