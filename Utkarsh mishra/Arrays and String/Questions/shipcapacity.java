class Solution {
    public int shipWithinDays(int[] w, int d) {
    int sum=0;
        
        int start=0;
       int n=w.length;
        if(n<d)
            return -1;
        for(int i=0;i<w.length;i++)
        {
            sum=sum+w[i];
            start=Math.max(start,w[i]);
            
            
        }
       int end=sum;
        int res=-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(valid(w,n,d,mid)==true)
            {res=mid;
            end=mid-1;}
            else
            {start=mid+1;}
        }
     return res;   }
     public boolean valid(int[] a,int b,int c,int m)
        {
            int s=1;
            int sum=0;
            for(int i=0;i<a.length;i++)
        {sum=sum+a[i];
            if(sum>m)
            {   s++;
            sum=a[i];
            }
         if(s>c)
             return false;
        }
            return true;
        }
        
    
    
 }
