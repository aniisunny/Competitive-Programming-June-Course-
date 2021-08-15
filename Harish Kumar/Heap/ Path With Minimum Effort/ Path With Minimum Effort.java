class Solution {
    int[][] dir=new int[][]{{0,1},{1,0},{-1,0},{0,-1}};
    public int minimumEffortPath(int[][] heights) {
        int start=0;
        int end =1000000;
        int m=heights.length;
        int n=heights[0].length;
        while(start<end){
            int mid=start+(end-start)/2;
            boolean[][] visited=new boolean[m][n];
            if(isPath(heights,0,0,visited,mid,heights[0][0])){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start;
    }
    
    boolean isPath(int[][] heights,int x,int y,boolean[][] visited,int k,int val){
        if(x<0||y<0||x>=heights.length||y>=heights[0].length||visited[x][y] || Math.abs(val-heights[x][y])>k){
            return false;
        }
        if(x==heights.length-1 && y==heights[0].length-1){
            return true;
        }
        visited[x][y]=true;
        for(int[] d:dir){
            if(isPath(heights,x+d[0],y+d[1],visited,k,heights[x][y])){
                return true;
            }
        }
        
        return false;
    }
}
