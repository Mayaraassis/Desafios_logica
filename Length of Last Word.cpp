class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
        bool flag= false;
        int tam = s.length();
        for(int i = tam-1; i>=0; i--){
            if(s[i]==' ' &&flag){
                break;
            }
            if(s[i] != ' '){
                flag = true;
                count++;
            }
        }
        return count;
    }
};
