struct node{
    int x,y,time;
    node(int _x,int _y, int _time){
        x=_x;
        y=_y;
        time=_time;
    }
};

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
         int n=grid.size();
        int m=grid[0].size();
        int cntora=0;
        queue<node>q;
        int dir[]={-1,0,1,0,-1};
        int ans=0;
        int count=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push(node(i,j,0));
                }
                if(grid[i][j]!=0){
                    cntora++;
                }
            }
        }
     while(!q.empty()){
         int u=q.front().x;
         int v=q.front().y;
         int time= q.front().time;
         q.pop();
         count++;
         ans=max(ans,time);
         
         for(int i=0;i<4;i++){
            int newu=u+dir[i];
            int newv=v+dir[i+1];
             
            if(newu>=0 && newu<n && newv>=0 && newv<m && grid[newu][newv]==1){
                grid[newu][newv]=2;
                q.push(node(newu,newv,time+1));
            } 
         }
     }
        if(count==cntora)return ans;
     return -1; 
    }
};
