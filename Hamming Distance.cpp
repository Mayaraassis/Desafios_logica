class Solution {
public:
    int hammingDistance(int x, int y) {
        int count = 0;
        int diff = x ^ y;
        while(diff) {
            int rsb = (diff & -diff);
            diff -= rsb;
            count++;
        }
        return count;
    }
};
