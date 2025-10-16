class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int used = 0;
        int cnt = 0;
        vector<int> v;
        int l = 0;
        for(int i = 0, r = 0; r < nums.size(); r++)
        {
            if(nums[r])
            {
                cnt++;
            }
            else if(used < k)
            {
                cnt++;
                used++;
            }
            else
            {
                v.push_back(cnt);
                if(k == 0)
                {
                    l = r;
                    cnt = 0;
                    continue;
                }
                while(l < r and used >= k)
                {
                    if(!nums[l])
                        used--;
                    cnt--;
                    l++;
                }
                if(nums[r])
                {
                    cnt++;
                }
                else if(used < k)
                {
                    cnt++;
                    used++;
                }
            }
            v.push_back(cnt);
        }
        return *max_element(v.begin(),v.end());
    }
};