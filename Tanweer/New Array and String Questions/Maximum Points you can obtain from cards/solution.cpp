class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int score = 0 , maxscore = 0;
        for (int i = 0; i<k ; i++)
        {
            score+=cardPoints[i];
        }
        maxscore = score;
        for(int i = 1 ; i<=k ; i++)
        {
            score = score - cardPoints[k-i] + cardPoints[cardPoints.size()-i];
            maxscore = max(score,maxscore);
        }
        return maxscore;
    }
};