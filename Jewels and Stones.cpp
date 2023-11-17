class Solution {
public:
    int numJewelsInStones(string &jewels, string &stones) {
        unordered_map<char, bool> tmp;
        int count {0};
        for(auto &it : jewels){
            if(tmp.find(it) == tmp.end()){
                tmp[it] = true;
            }
        }
        for(auto &it : stones){
            if(tmp.find(it) != tmp.end()){
                ++count;
            }
        }
        return count;
    }
};
