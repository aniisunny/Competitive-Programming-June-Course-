class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0;
        stack<int> st;
        for(auto x:s)
        {
            if(x=='(')
            {
                st.push(score);
                score=0;
            }
            else
            {
                int t=st.top();
                st.pop();
                score=t+max(2*score,1);
            }
               
            
        }
        return score;
    }
};
