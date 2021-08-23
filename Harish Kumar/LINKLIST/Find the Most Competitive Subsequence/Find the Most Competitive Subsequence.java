class Solution {
    public int[] mostCompetitive(int[] nums, int k) {
        
        int ans[] = new int[k];
        int top = 0;
        
        for(int i = 0; i < nums.length; i++)
        {
            while(top > 0 && nums[i] < ans[top-1] && top + nums.length-i > k)
            {
                top--;
            }
            if(top < k)
            {
                
                ans[top++] = nums[i]; 
            }
        }
        return ans;
    }
}

// stack implementation

class Solution {
    public int[] mostCompetitive(int[] nums, int k) {
        
        Stack<Integer> stack = new Stack<>();
        
        for(int i = 0; i < nums.length; i++)
        {
            while(!stack.isEmpty() && nums[i] < nums[stack.peek()] && stack.size()+ nums.length - i > k)
            {
                stack.pop();
            }
            if(stack.size() < k)
            {
                stack.push(i);
            }
        }
        
        int i = k;
        int ans[] = new int[k];
        while(!stack.isEmpty())
        {
            ans[--i] = nums[stack.pop()];
            
        }
        return ans;
    }
}



