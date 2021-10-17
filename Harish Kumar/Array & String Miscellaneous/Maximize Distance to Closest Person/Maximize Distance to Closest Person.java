class Solution {
    public int maxDistToClosest(int[] seats) {
        
        int ans = 0;
        int val = 0;
        
        //case 1 -> sit in the mid of two people
        
        for(int i = 0; i< seats.length;i++)
        {
            if(seats[i] == 1)
            {
                val = 0;
            }
            else
            {
                val++;
                ans = Math.max(ans,(val+1)/2);
            }
        }
        
        //case 2 -> sit in the far left, from first pesron
        
        for(int i = 0; i< seats.length;i++)
        {
            if(seats[i]==1)
            {
                ans = Math.max(ans,i);
                break;
            }
        }
        
        //case 3 --> sit in the far right , from first person
        
        for(int i = seats.length-1; i>= 0;i--)
        {
            if(seats[i] == 1)
            {
                ans = Math.max(ans,seats.length - 1 - i);
                break;
            }
        }
        return ans;
    }
}
