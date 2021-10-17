class Solution {
    public void setZeroes(int[][] matrix) {
        Set<Integer> r=new HashSet<>();
        Set<Integer> c=new HashSet<>();
        for(int i=0;i<matrix.length;i++)
        {
            for(int j=0;j<matrix[0].length;j++)
            {
                if(matrix[i][j]==0)
                {
                    r.add(i);
                    c.add(j);
                }
            }
            
        }
        for(int i:r)
        { 
            for(int j=0;j<matrix[0].length;j++)
            {
            matrix[i][j]=0;
            }
        }
         for(int i:c)
        { 
            for(int j=0;j<matrix.length;j++)
            {
            matrix[j][i]=0;
            }
        }
        
    }
}
