class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> frq(26, 0);
        vector<int> frqq(26, 0);
        for (auto it : word1) {
            frq[it - 'a']++;
        }
        for (auto it : word2) {
            frqq[it - 'a']++;
        }
        for (int i = 0; i < 26; i++) 
        {
            if ((frq[i] == 0 && frqq[i] != 0) || (frq[i] != 0 && frqq[i] == 0)) 
            {
                return false;
            }
        }
        sort(frq.begin(), frq.end());
        sort(frqq.begin(), frqq.end());
        for (int i = 0; i < 26; i++) {
            if (frq[i] != frqq[i]) {
                return false;
            }
        }
        return true;
    }
};