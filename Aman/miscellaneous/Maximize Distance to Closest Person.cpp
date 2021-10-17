class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        int i=0,j=0,mx=0,fl=0;
        while(i<n)
        {
            if(seats[i]==1 && fl==0)
            {
             mx=max(mx,i-j);
             j=i;
             fl=1;
            }
            else if(seats[i]==1 && fl==1)
            {
             mx=max(mx,(i-j)/2);
             j=i;
            }
            i++;
        }
        
        if(seats[n-1]==0)
            mx=max(mx,(n-1-j));
        
        return  mx;
    }
};
