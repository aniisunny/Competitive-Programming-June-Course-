class Solution {
    public int[] nextGreaterElements(int[] nums) {
        
        int n=nums.length;
        int[] ans=new int[n];
        Stack<Integer> stk=new Stack<>();
        stk.push(nums[((2*n)-1)%n]);
        for(int i=(2*n)-2;i>=0;i--)
        {
           
                 int curr=nums[i%n];
                while(!stk.isEmpty() && stk.peek()<=curr)
                {
                    stk.pop();
                }
                if(i<n && stk.isEmpty())
                {
                  ans[i%n]=-1;
                }
                else if(i<n && !stk.isEmpty())
                {
                    ans[i%n]=stk.peek();
                }
                stk.push(curr);
            
            
            
        }
        return ans;
        
    }
}
