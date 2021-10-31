class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int max_ar=INT_MIN;
        for(int i=0; i<heights.size(); i++) {
            
            while(!st.empty() && heights[i]<heights[st.top()]) {
                int h = st.top();
                st.pop();
                int width = 0;
                if(st.empty()) width =i;
                else width = i-st.top()-1;
                max_ar = max(max_ar, width*heights[h]);
            }
            st.push(i);
        }
        while(!st.empty()) {
            int h = st.top();
                st.pop();
                int width = 0;
                if(st.empty()) width =heights.size();
                else width = heights.size()-st.top()-1;
                max_ar = max(max_ar, width*heights[h]);
        }
        return max_ar;
        }
};