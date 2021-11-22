class Solution {
public:
    vector<int> NSL(vector<int> heights){
        vector<int> left;
        stack<pair<int,int>> st;
        for(int i=0;i<heights.size();i++){
            if(st.empty())
                left.push_back(-1);
            else if(!st.empty() && st.top().first<heights[i])
                left.push_back(st.top().second);
            else if(!st.empty() && st.top().first>=heights[i]){
                while(!st.empty() && st.top().first>=heights[i])
                    st.pop();
                if(st.empty())
                    left.push_back(-1);
                else 
                    left.push_back(st.top().second);
            }
            st.push({heights[i],i});
        }
        return left;
    }
    vector<int> NSR(vector<int> heights){
        vector<int> right;
        stack<pair<int,int>> st;
        for(int i=heights.size()-1;i>=0;i--){
            if(st.empty())
                right.push_back(heights.size());
            else if(!st.empty() && st.top().first<heights[i])
                right.push_back(st.top().second);
            else if(!st.empty() && st.top().first>=heights[i]){
                while(!st.empty() && st.top().first>=heights[i])
                    st.pop();
                if(st.empty())
                    right.push_back(heights.size());
                else 
                    right.push_back(st.top().second);
            }
            st.push({heights[i],i});
        }
        reverse(right.begin(),right.end());
        return right;
    }
    int largestRectangleArea(vector<int>& heights) {
        vector<int> right;
        vector<int> left;
        
        right=NSR(heights);
        left=NSL(heights);
        
        vector<int> width;
        int mx=0;
        for(int i=0;i<left.size();i++){
            width.push_back(right[i]-left[i]-1);
        }
        
        for(int i=0;i<heights.size();i++){
            mx=max(mx,heights[i]*width[i]);
        }
        
        return mx;
    }
    
};
