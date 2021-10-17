class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n=h.size(),res=0;
        stack<int>st;
        for(int i=0;i<=n;i++)
        {
            int curr=i==n?0:h[i];
            while(!st.empty() && curr<h[st.top()])
            {
                int tp=st.top();
                st.pop();
                int wt=st.empty()?i:i-st.top()-1;
                int area=h[tp]*wt;
                res=max(res,area);
            }
            st.push(i);
        }
        return res;
    }
};
