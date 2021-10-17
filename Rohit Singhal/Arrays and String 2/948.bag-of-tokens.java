/*
 * @lc app=leetcode id=948 lang=java
 *
 * [948] Bag of Tokens
 */

// @lc code=start
class Solution {
    public int bagOfTokensScore(int[] tokens, int power) {
        Arrays.sort(tokens);
        int score=0;
        int i=0;
        int j=tokens.length-1;
        while(i<=j)
        {
          
            
            if(power>=tokens[i])
            {
                power=power-tokens[i];
                score++;
                i++;
            }
            
             else if(score!=0 && i!=j)
            {
                power=power+tokens[j];
                 score--;
                 j--;
            }
            else
            {
                break;
            }
            
        }
        return score;
    }
}
// @lc code=end

