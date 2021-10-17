class Solution {
public:
    int beautySum(string s) {
        int beauty = 0;
        if(s.length()==1)return beauty;
        
        for(int i=0;i<s.length()-2;i++){
            int a[26]={0};
            a[s[i]-'a']++;
            a[s[i+1]-'a']++;
            for(int j=i+2;j<s.length();j++){
                a[s[j]-'a']++;
                int mini = INT_MAX;
                int maxi = -1;
                for(auto freq:a){
                    if(freq!=0){
                        mini = min(mini, freq);
                        maxi = max(maxi, freq);
                    }
                }
                beauty += maxi - mini;
            }
        }
        return beauty;        
    }
};
