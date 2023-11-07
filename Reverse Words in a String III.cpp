class Solution {
public:
    string reverseWords(string s) {
        int start=0,end=0;
        while(start<s.length()){
            while(end<s.length() && s[end]!= ' '){
                end++;
            }
            reverse(s.begin()+start,s.begin()+end);
            start=end+1;
            end=start;
        }
        return s;
    }
};
