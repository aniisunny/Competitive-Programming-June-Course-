class Solution {
public:
    //with queue:
    /*class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
        while(q.size()!=1){
            int x=k;
            while(x>1){
                int r=q.front();
                q.pop();
                q.push(r);
                x--;
            }
            q.pop();
        }
        return q.front();
    }
};*/
    
    //is n is start from 0 (x+k)%n
   
        int findTheWinner(int n, int k) {
        if(n==1)
            return 1;
        return (findTheWinner(n-1,k)+k-1)%n+1;
    }
};
