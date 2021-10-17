class Solution {
    public List<Integer> spiralOrder(int[][] m) {
        List<Integer> r=new ArrayList<>();
        int d=0;
        int top=0,down=m.length-1,left=0,right=m[0].length-1;
        while(top<=down && left<=right){
       if(d==0){
            for(int j=left;j<=right;j++)
           { 
            r.add(m[top][j]);
            }
       top++;}
            else  if(d==1){
        for(int j=top;j<=down;j++)
        {
            r.add(m[j][right]);
            
        }
                right--;
                
            }
            
       else if(d==2)
           {
          for(int j=right;j>=left;j--)
        {
            r.add(m[down][j]);
            
        }
           down--;
           
       }
            
            
         else if(d==3)
           {
          for(int j=down;j>=top;j--)
        {
            r.add(m[j][left]);
            
        }
           left++;}
          
    d=(d+1)%4;
       }
        return r;
    }
}
