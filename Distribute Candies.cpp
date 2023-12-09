darian-catalin-cucer's avatar
darian-catalin-cucer

2205
February 9, 2023 3:46 AM

1.3K VIEWS

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        int types_num = set<int>(candies.begin(), candies.end()).size();
        return types_num > candies.size()/2 ? candies.size()/2 : types_num;
    }
};
