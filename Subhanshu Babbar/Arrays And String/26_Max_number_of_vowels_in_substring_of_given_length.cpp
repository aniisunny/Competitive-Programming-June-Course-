class Solution {
public:
    int maxVowels(string s, int k) {  
        int count=0;
        int i=0;
        int max_val=0;
        for(int j=0;j<s.size();j++){
            if(s[j]=='a'|| s[j]=='e'|| s[j]=='i'|| s[j]=='o'|| s[j]=='u'){
                count++;
            } 
            if(j-i+1==k){
                max_val=max(max_val,count);
                 if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                     count--;
                }
                i++;
            }   
        }
        return max_val;
    }
};