class Solution {
public:
    int beautySum(string s) {
        //strings length less than 3 beauty is 0 
        if(s.length()<=2) return 0;
        int beauty=0;
        //iterate by taking 2char at a time (iterate again -inner)
        for(int i=0;i<s.length()-2;i++)
        {
            int freq[26]={0};
            freq[s[i]-'a']++;
            freq[s[i+1]-'a']++;
            //substrings with len>=2 are generated(1st 2 chars are i,i+1 th elements)
            for(int j=i+2;j<s.length();j++)
            {
                freq[s[j]-'a']++;
                int minf=INT_MAX;
                int maxf=INT_MIN;
                for(auto x:freq)
                { if(x!=0)
               
                {  minf=min(minf,x);
                    maxf=max(maxf,x);}
                }
                beauty+=(maxf-minf);
            }
        }
        return beauty;
        
    }
};
