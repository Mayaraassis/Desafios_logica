class Solution {
public:
    int xorOperation(int n, int s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int ans=0;
        for(int i=s,j=0; j<n; j++,i+=2){
            ans^=i;
        }
        return ans;
    }
};
