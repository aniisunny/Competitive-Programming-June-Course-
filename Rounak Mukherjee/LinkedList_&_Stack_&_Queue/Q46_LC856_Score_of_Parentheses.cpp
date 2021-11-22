class Solution {
public:
    int scoreOfParentheses(string S) {
       
    int count = 0;
    stack<int> sum;
    
    for(int i = 0; i < S.size(); i++)
      if( S[i] == '(' ){
        sum.push(count);
        count = 0;
      }
      else{
        if(count == 0) count = sum.top() + 1;
        else count = count*2 + sum.top();
        sum.pop();
      }
    
    return count;
  }
    
};
