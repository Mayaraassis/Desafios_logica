class Solution {
public:
    string toGoatLatin(string s) {
        string res;
        int count=0;
        for(int i=0; i<s.length(); i++){
            string temp;
            while(s[i]!=' ' && i<s.length()){
                temp +=s[i];
                i++;
            }
            count++;
            if(temp[0]!='a' && temp[0]!='e' && temp[0]!='i' && temp[0]!='o' && temp[0]!='u'&& temp[0]!='A' && temp[0]!='E' && temp[0]!='I' && temp[0]!='O' && temp[0]!='U'){
                char t;
                t = temp[0];
                for(int k=0; k<temp.length()-1; k++){
                    temp[k]=temp[k+1];
                }
                temp[temp.length()-1]=t;
            }
            temp+="ma";
            for(int j=0; j<count; j++){
                temp+="a";
            }
            res+=temp+" ";
        }
        return res.substr(0,res.length()-1);
    }
};
