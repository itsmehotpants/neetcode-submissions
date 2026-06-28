class Solution {
public:
    int maxProfit(vector<int>& prices) {
            int l = 0,r  = prices.size()-1;
        int ans  = 0;
        // while(l<r){
        //     ans  = max(prices[i],ans);

        // }
        for(int i =0;i<prices.size();i++){
            for(int j = i;j<prices.size();j++){
                ans =max(ans,prices[j]-prices[i]);
            }
        }
return ans;
    }
};
