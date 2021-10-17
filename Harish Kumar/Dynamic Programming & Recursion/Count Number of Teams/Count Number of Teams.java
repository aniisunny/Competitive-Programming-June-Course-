class Solution {
    public int numTeams(int[] rating) {
        
        int total = 0;
        
        for(int i = 0; i < rating.length;i++)
        {
            int leftGreater = 0, leftSmaller = 0;
            int rightGreater = 0, rightSmaller = 0;
            
            for(int j = 0; j < i; j++)
            {
                if(rating[j] < rating[i])
                {
                    leftSmaller++;
                }
                else
                {
                    leftGreater++;
                }
            }
            
            for(int j = i+1; j < rating.length;j++)
            {
                if(rating[j] > rating[i])
                {
                    rightGreater++;
                }
                else
                {
                    rightSmaller++;
                }
            }
            
            total += leftSmaller*rightGreater + leftGreater*rightSmaller;
        }
        return total;

    }
}
