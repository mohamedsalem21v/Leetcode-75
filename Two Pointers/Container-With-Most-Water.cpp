class Solution {
public:
    int area(int l, int r, int val1, int val2)
    {
        return (r-l) * min(val1,val2);
    }
    int maxArea(vector<int>& height) {
        int l = 0, r = height.size()-1;
        int val1 = height[l], val2 = height[r];
        stack<int>st;
        st.push(area(l,r,val1,val2));
        while(l < r)
        {
            if(height[l] <= height[r])
                val1 = height[++l];
            else
                val2 = height[--r];
            if(st.top() < area(l,r,val1,val2))
                st.push(area(l,r,val1,val2));
        }

        return st.top();
    }
};