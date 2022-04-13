class Solution {
public:
   string getPermutation(int n, int k) {
      int fact=1;
      string ans="";
       vector<int>num;
      for(int i=1;i<=n;i++) {
          num.push_back(i);
          fact*=i;
      }
       k--;
       while(num.size()){
           fact=fact/num.size();
           ans=ans+to_string(num[k/fact]);
           num.erase(num.begin()+k/fact);
           k=k%fact;  
       }
       return ans;
    }
};
