class Solution {
public:
    int compress(vector<char>& chars) {
        
        vector<int> v;
        int cnt = 0;
        vector<char>ch;
        char s = '\0';
        for(int i = 0; i < chars.size(); i++)
        {
            if(i>0 and chars[i] != chars[i-1])
            {
                if(i == chars.size()-1)
                {
                    s = chars[i-1];
                    ch.push_back(s);
                    s = '\0';
                    v.push_back(cnt);
                    cnt = 0;
                    s = chars[i];
                    ch.push_back(s);
                    s = '\0';
                    v.push_back(cnt);
                    cnt = 0;
                }
                else
                {
                    s = chars[i-1];
                    ch.push_back(s);
                    s = '\0';
                    v.push_back(cnt);
                    cnt = 0;
                }
               
            }
            else if(i == chars.size()-1)
            {
                s = chars[i];
                ch.push_back(s);
                v.push_back(++cnt);
            }
            cnt++;
        }
        string alt = "";
        for(int i = 0; i < ch.size(); i++)
        {
            alt += ch[i];
            if(v[i] > 1)
                alt += to_string(v[i]);
        }
        vector<char> ch1;
        for(auto it : alt)
            ch1.push_back(it);
        chars = ch1;
        return chars.size();
    }
};