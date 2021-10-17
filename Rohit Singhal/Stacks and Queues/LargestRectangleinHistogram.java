class Solution {
    public int largestRectangleArea(int[] heights) {
        int n=heights.length;
        int[] lb=new int[n];       //next smaller element on left
        int[] rb=new int[n];
        Stack<Integer> stk=new Stack<>();
        lb[0]=-1;
        stk.push(0);
        for(int i=1;i<n;i++)
        {
            while(!stk.isEmpty() && heights[stk.peek()]>=heights[i])
            {
                stk.pop();
            }
            if(stk.isEmpty())
            {
                lb[i]=-1;
            }
            else
            {
                lb[i]=stk.peek();
            }
            stk.push(i);
            
        }
        
        Stack<Integer> stk2=new Stack<>();
        rb[n-1]=n;
        stk2.push(n-1);
        for(int i=n-2;i>=0;i--)
        {
            while(!stk2.isEmpty() && heights[stk2.peek()]>=heights[i])
            {
                stk2.pop();
            }
            if(stk2.isEmpty())
            {
                rb[i]=n;
            }
            else
            {
                rb[i]=stk2.peek();
            }
            stk2.push(i); 
        }
        
        
    
    
    
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int width=rb[i]-lb[i]-1;
        int area=heights[i]*width;
        if(ans<area)
        {
            ans=area;
        }
        
    }
    return ans;
        
    }
}
