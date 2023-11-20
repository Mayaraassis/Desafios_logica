class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right);
};
/**************************************************************/
vector<int> Solution::selfDividingNumbers(int left, int right) {
    int i, found, iAux, d;
    vector<int> v;
    for (i = left; i <= right; ++i) {
        for (found = 0, iAux = i; iAux != 0; iAux/=10) {
            d = iAux % 10;
            if (d == 0 || i % d != 0) {
                found = 1;
                break;
            }
        }
        if (found == 0) {
            v.emplace_back(i);
        }
    }
    return v;
}
/***************************************************************/
