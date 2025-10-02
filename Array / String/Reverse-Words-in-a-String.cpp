class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string st = "";
        bool flag = false;
        for(auto it : s)
        {
            if(it == ' ' and flag)
            {
                flag = false;
                v.push_back(st);
                st = "";
            }
            else if(it != ' ')
            {
                flag = true;
                st += it;
            }
        }
        if(!st.empty())
            v.push_back(st);
        string ans = "";
        for(int i = v.size()-1; i >= 0; i--)
        {
            if(i == 0)
                ans += v[i];
            else
            {
                ans += v[i];
                ans += ' ';
            }
        }
        return ans;
    }
};