class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        if(text1.length()==0 || text2.length()==0)
        {
            return 0;
        }
        vector<vector<int>>vec(text1.length()+1,vector<int>(text2.length()+1,0));
        for(int i=0;i<text1.length();i++)
        {
            for(int j=0;j<text2.length();j++)
            {
                if (text1[i]==text2[j])
                {
                    vec[i+1][j+1]=1+vec[i][j];
                }
                else
                {
                    vec[i+1][j+1]=max(vec[i][j+1],vec[i+1][j]);
                }
            }
        }
        
       return vec[text1.length()][text2.length()]; 
    }
};