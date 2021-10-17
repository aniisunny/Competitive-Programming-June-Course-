class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        string res="";
        int i=0;
        if(k==num.length())
            return "0";
        for(int i=0;i<num.size();i++)
        {
            while(!st.empty()&&st.top()>num[i]&&k)
            {
                st.pop();
                k--;
            }
           
            st.push(num[i]);
        }
        while(k--)
        {
            st.pop();
        }
        while(!st.empty())
        {
            res+=st.top();
            st.pop();
        }
        reverse(res.begin(),res.end());
        int in;
        for(in=0;in<res.size();in++)
        {
            if(res[in]!='0')
            {
                break;
            }
        }
        if(res.substr(in).length()==0)
            return "0";
        return res.substr(in);
    }
};
