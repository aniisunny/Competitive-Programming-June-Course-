class Solution {
public:
    string removeKdigits(string& num, int& k)
    {
        if(num.length() == 0 || k == 0)
        {
            return num;
        }
        
        stack<char> s;
        
        for(int i = 0 ; i<num.length() ; i++)
        {
            while(k != 0 && !s.empty() && int(s.top())>int(num[i]))
            {
                s.pop();
                k--;
            }
            
            s.push(num[i]);
        }
        
        while(k-- != 0)
        {
            s.pop();
        }
        
        string ans = "";
        
        while(!s.empty())
        {
            ans = s.top() + ans;
            s.pop();
        }
        
        int i = 0;
        
        while(i<ans.length() && ans[i] == '0')
        {
            i++;
        }
        
        return i==ans.length() ? "0" : ans.substr(i , ans.length()-i);
        
        
    }
};