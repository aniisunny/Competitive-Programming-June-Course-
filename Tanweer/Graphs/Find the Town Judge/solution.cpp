class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) 
    {
        if(trust.size() == 0)
        {
            if(N==1)
            {
                return 1;
            }
            else
            {
                return -1;
            }
                
           
        }
        else if(trust.size() == 1)
        {
            return trust[0][1];
        }
        vector<int> vec(N+1,0);
        for(int i = 0 ; i<trust.size() ; i++)
        {
            vec[trust[i][0]] -= 1;
            vec[trust[i][1]] += 1;
        }
        for(int i = 0 ; i<vec.size() ; i++)
        {
            if(vec[i]==N-1)
            {
                return i;
            }
        }
        return -1;
    }
};