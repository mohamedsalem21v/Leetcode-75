class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> v;
        int cnt = 0;
        for(auto it : nums)
        {
            if(it == 0)
                cnt++;
            else
                v.push_back(it);
        }
        for(int i = 0; i < cnt; i++)
            v.push_back(0);
        nums = v;


    }
};