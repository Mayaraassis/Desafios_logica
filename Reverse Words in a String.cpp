class Solution {
public:
    string reverseWords(string s) {
        unordered_map<int, string> mp;
        int n = s.length(), word_count = 1;
        for(int i=0; i<n; i++){
            if(s[i] != ' '){
                string temp = "";
                while(i<n && (s[i] != ' ' || i==n-1)){
                    temp += s[i++];
                }
                mp[word_count++] = temp;
            }
        }
        string ans = "";
        while(--word_count){
            ans += mp[word_count] + " ";
        }
        ans.pop_back();
        return ans;
    }
};
