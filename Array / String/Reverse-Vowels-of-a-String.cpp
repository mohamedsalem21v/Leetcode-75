class Solution {
public:
    string reverseVowels(string s) {
        vector<char> v;
        vector<int> vv;
        int idx = 0;
        for(auto it : s)
        {
            if(char(tolower(it)) == 'a' or char(tolower(it)) == 'e' or char(tolower(it)) == 'i'
            or char(tolower(it)) == 'o' or char(tolower(it)) == 'u')
            {
                v.push_back(it);
                vv.push_back(idx);
            }
            idx++;
        }
        reverse(v.begin(),v.end());
        string ans = "";
        
        vector<pair<int,char>> p;
        for(int i = 0; i < v.size(); i++)
        {
            p.push_back({vv[i],v[i]});
        }
        for(int i = 0; i < s.size(); i++)
        {
            if(binary_search(vv.begin(),vv.end(),i))
            {
                auto it = lower_bound(p.begin(),p.end(),make_pair(i,'A'));
                ans += (*it).second;
            }
            else
            {
                ans += s[i];
            }
        }
        return ans;
    }
};