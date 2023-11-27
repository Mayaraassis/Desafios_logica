class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int>a=h;
        sort(a.begin(),a.end());
        int cnt=0;
        for(int i=0;i<h.size();i++)
        if(a[i]!=h[i]) cnt++;
        return cnt;
    }
};
