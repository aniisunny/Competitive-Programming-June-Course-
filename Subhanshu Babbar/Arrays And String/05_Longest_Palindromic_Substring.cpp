class Solution {
public:
    
    string longestPalindrome(string s){
     int low=0,high=0;
    int start=0,end=1;
    for(int i=1;i<s.size();i++){
        //even part
        low=i-1;
        high=i;
        while(low>=0 &&high<s.size() &&s[low]==s[high]){
            if(high-low+1>end){
                start=low;
                end=high-low+1;
            }
            low--;
            high++;
        }
        //odd part
         low=i-1;
        high=i+1;
        while(low>=0 &&high<s.size() &&s[low]==s[high]){
            if(high-low+1>end){
                start=low;
                end=high-low+1;
            }
            low--;
            high++;
        }
    }
    return s.substr(start,end);
   
}
};