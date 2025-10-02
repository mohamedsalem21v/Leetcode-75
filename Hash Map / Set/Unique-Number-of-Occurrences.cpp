class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int>s;
        map<int,int> mp;
        for(auto it: arr)
            mp[it]++;
        vector<int>v;
        for(auto it : mp)
        {
            v.push_back(it.second);
            s.insert(it.second);
        }
        return (v.size() == s.size() ? true : false);
    }
};