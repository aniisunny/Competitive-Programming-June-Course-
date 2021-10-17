class Solution {
    public int maxArea(int[] height) {
        
 int ans = Integer.MIN_VALUE;
    
    int start=0;
    int end = height.length-1;
    
    while(start<end){
        
        if(height[start]<height[end]){
            
            int val=(end-start)*(Math.min(height[start],height[end]));
            ans=Math.max(ans,val);
            start++;
        }
        else{
            int val=(end-start)*(Math.min(height[start],height[end]));
            ans=Math.max(ans,val);
            end--;
        }
    }
    
    return ans;
}
}
