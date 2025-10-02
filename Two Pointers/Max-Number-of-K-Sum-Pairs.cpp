class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int cnt = 0;
        int l = 0, r = nums.size()-1;
        sort(nums.begin(), nums.end());
        while(l<r)
        {
            if(nums[l]+nums[r] == k)
            {
                cnt++;
                l++;
                r--;
            }
            else if(nums[l]+nums[r] < k)
                l++;
            else
                r--;
        }
        return cnt;
    }
};