class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        reverse(prices.begin(),prices.end());
        int n=prices.size();
        int mx=INT_MIN;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            if(mx<prices[i]){
                if(mn!=INT_MAX)
                ans+=(mx-mn);
                mx=prices[i];
                 mn=INT_MAX;
                continue;
            }
            if(mn>prices[i]){
             
                mn=prices[i];
            }
            else{
  if(mn!=INT_MAX)
                ans+=(mx-mn);
                mx=prices[i];
                mn=INT_MAX;
            }
            
        }
        if(mn!=INT_MAX)
                ans+=(mx-mn);
        return ans;
    }
};
