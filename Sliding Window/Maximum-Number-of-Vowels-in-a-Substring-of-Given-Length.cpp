class Solution {
public:
    bool voul(char ch)
    {
        if(ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
            return true;
        return false;
    }
    int maxVowels(string s, int k) {
        deque<char>sub;
        int mx = 0;
        for(int i = 0; i < k; i++)
        {
            sub.push_back(s[i]);
            if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u')
                mx++;
        }
        int cnt = mx;
        for(int i = k; i < s.size(); i++)
        {
            sub.push_back(s[i]);
            if(voul(s[i]))
                cnt++;
            if(voul(sub[0]))
                cnt--;
            sub.pop_front();
            mx = max(mx,cnt);
        }
        return mx;
    }
};