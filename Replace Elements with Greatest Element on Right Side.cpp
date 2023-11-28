class Solution {
public:
    vector<int> replaceElements(vector<int>& arr)
    {
        int n=arr.size();
        vector<int>v(n);
        int t=-1;
        v[n-1]=-1;
        for(int i=n-2;i>=0;i--)
        {
            v[i]=max(v[i+1],arr[i+1]);
        }
        return v;
        
    }
};
