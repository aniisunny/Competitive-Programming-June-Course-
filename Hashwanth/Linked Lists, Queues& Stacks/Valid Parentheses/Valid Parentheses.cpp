class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if(s.length()==0)
            return true;
        for(auto x:s)
        {
            if(x=='('||x=='{'||x=='[')
                st.push(x);
            else
            {
                if(st.empty()||(x==')' && st.top()!='(')||(x=='}' && st.top()!='{')||(x==']' && st.top()!='['))
                    return false;
                else
                    st.pop();
            }
        }
        return st.empty();
    }
};
