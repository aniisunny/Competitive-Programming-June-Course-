class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> count(N+1);
        
        for(int i=0; i < trust.size(); i++)
        {
            // trust[A][B]  => A trusts B // A can never be judge
            count[trust[i][0]] = -1;
            
            // trust[A][B]  => A trusts B // B will be increased because it is trusted by one person
            count[trust[i][1]]++;
        }
            
        for (int i = 1; i <= N; ++i) {
            // if someone is trusted by N-1 person, ofcourse he is a judge
            if (count[i] == N - 1)
                return i;
        }
        return -1;
    }
};
