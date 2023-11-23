class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        int n = words[0].length();

        for (int i = 0; i < n; i++) {
            char ch = words[0][i];

            int j; 

            for (j = 1; j < words.size(); j++) {
                int pos = words[j].find(ch);
                if (pos == string::npos) {
                    break;
                }
                words[j].erase(pos, 1); //if not found clear th ch for next element 
            }

            if (j == words.size()) {
                ans.push_back(string(1, ch)); // Character found in all words
            }
        }
        return ans;
    }
};

