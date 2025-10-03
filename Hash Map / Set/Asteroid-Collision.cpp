class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        st.push(asteroids[0]);
        for(int i = 1; i < asteroids.size(); i++)
        {
            if(st.empty() || (st.top() > 0 and asteroids[i] > 0) || (st.top() < 0 and asteroids[i] < 0))
                st.push(asteroids[i]);
            else
            {
                bool destroyed = false;
                while(!st.empty() and st.top() > 0 and asteroids[i] < 0)
                {
                    if(abs(st.top()) < abs(asteroids[i]))
                    {
                        st.pop();
                        continue;
                    }
                    else if(abs(st.top()) == abs(asteroids[i]))
                    {
                        st.pop();
                    }
                    destroyed = true;
                    break;
                }
                if(!destroyed) 
                    st.push(asteroids[i]);
            }
        }
        vector<int> v;
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
