class Solution 
{
public:
    Solution()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
    }
    
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) 
    {
        vector<vector<int>> vec(3,vector<int>(7,0));
        int minswap = INT_MAX , i = 0;
        
        while(i != tops.size())
        {
            if(tops[i] == bottoms[i])
            {
                vec[0][tops[i]]++;
            }
            else
            {
                vec[0][tops[i]]++;
                vec[0][bottoms[i]]++;
                vec[1][tops[i]]++;
                vec[2][bottoms[i]]++;
            }
            
            i++;
        }
        
        i = 1;
        
        while(i != vec[0].size())
        {
            if(vec[0][i] == tops.size())
            {
                minswap = min(minswap,min(vec[1][i], vec[2][i]));
            }
            i++;
        }
        
        return minswap == INT_MAX ? -1 : minswap;
        
    }
};