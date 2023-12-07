class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int>position;
        vector<int>ans;
        for(int i=0;i<s.length();i++){
            if(s[i]==c){
                position.push_back(i);
            }
        }
        //left
        for(int i=0;i<s.length();i++){ 
        int m=INT_MAX;
        //right
        for(int j=0;j<position.size();j++){
            m=min(m,abs(i-position[j]));
        }
             ans.push_back(m);
        }
        return ans;
    }
};
