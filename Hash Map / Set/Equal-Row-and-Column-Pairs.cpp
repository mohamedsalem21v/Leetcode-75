class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<vector<int>> cols;
        for(int i = 0; i < grid.size(); i++)
        {
            vector<int>v;
            for(int j = 0; j < grid.size(); j++)
            {
                v.push_back(grid[j][i]);
            }
            cols.push_back(v);
        }
        int cnt = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid.size(); j++)
            {
                if(cols[i] == grid[j])
                    cnt++;
            }
        }
        return cnt;
    }
};