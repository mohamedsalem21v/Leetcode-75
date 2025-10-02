class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        vector<int> vv;
        unordered_set<int> st1, st2;
        for(auto it : nums1)
            st1.insert(it);
        for(auto it : nums2)
            st2.insert(it);
        for(auto it : st1)
        {
            if(!st2.count(it))
                v.push_back(it);   
        }
        for(auto it : st2)
        {
            if(!st1.count(it))
                vv.push_back(it);   
        }
        return{v,vv};
    }
};