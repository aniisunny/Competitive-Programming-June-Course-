class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<int> st;
        for(int i=0; i<num.length(); i++) {
            while(!st.empty()&& num[i]<st.top() && k>0) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(!st.empty() && k>0) {
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        string ans = "";
        while(!st.empty()) {
            ans+=st.top();
            st.pop();
        }
        while(ans.length()>1 && ans[ans.length()-1]=='0') ans.pop_back(); 
        reverse(ans.begin(), ans.end());
        return ans;
    }
};