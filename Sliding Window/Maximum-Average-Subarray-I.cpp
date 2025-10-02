class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double cnt = 0;
        for(int i = 0; i < k; i++)
            cnt += nums[i];
        double mx = cnt;
        int l = 0 , r = k;
        while(r < nums.size())
        {
            cnt -= nums[l++];
            cnt += nums[r++];
            mx = max(cnt,mx);
        }
        return mx/k;
    }
};