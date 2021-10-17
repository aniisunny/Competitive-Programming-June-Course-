class Solution {    //divide and conqure approach
public:
    vector<int> diffWaysToCompute(string expression) {
        vector<int> result;
        for(int i=0;i<expression.length();i++)
        {
            char c=expression[i];
            if(c=='-' || c=='+' || c=='*')
            {
                string p1=expression.substr(0,i);
                string p2=expression.substr(i+1,expression.length()-1-i);
                vector<int>resP1=diffWaysToCompute(p1);
                vector<int>resP2=diffWaysToCompute(p2);
                for(auto x:resP1)
                {
                    for(auto y:resP2)
                    {
                        if(c=='-') result.push_back(x-y);
                        else if(c=='+') result.push_back(x+y);
                        else if(c=='*') result.push_back(x*y);
                    }
                }
            }
        }
        if(result.size()==0) result.push_back(stoi(expression));
        return result;
    }
    
};
