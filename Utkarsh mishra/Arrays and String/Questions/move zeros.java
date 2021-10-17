class Solution {
    public void moveZeroes(int[] arr) {
        int count = 0; 
        int n=arr.length;
        
        for(int i = 0; i < n; i++) 
        {if(arr[i] != 0) 
                arr[count++] = arr[i]; }
        while(count < n) 
        {arr[count++] = 0;}
            
            
        }
        
        
    }
