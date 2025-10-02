class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        int ls = 0;
        string ss = "";
        for(int i = 0; i < t.size(); i++)
        {
            if(ls < s.size() and t[i] == s[ls])
                ss += s[ls++];
        }
        return (s == ss ? true : false);
    }
};