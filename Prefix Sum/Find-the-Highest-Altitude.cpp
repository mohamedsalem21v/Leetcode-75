class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int mx = -10000;
        int cnt = 0;
        for(auto it : gain)
        {  
            cnt += it;
            mx = max(cnt,mx);
        }
        return (mx < 0 ? 0 : mx);
    }
};