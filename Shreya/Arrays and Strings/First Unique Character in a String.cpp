class Solution {
public:
    int firstUniqChar(string s) {
        if(s.length()==1)
        {
            return 0;
        }
        int arr[2][26]={0};
        for (int i=0; i<s.length(); i++)
        {
            arr[0][s[i]-97]=i;
            arr[1][s[i]-97]+=1;
        }
        int first = 100000;
        for (int i =0;i<26;i++)
        {
            if(arr[1][i]==1)
            {
                if(arr[0][i]<first)
                {
                    first = arr[0][i];
                }
            }
        }
        
       if(first==100000){
           return -1;
       }
        else
        {
            return first;
        }
    }
};