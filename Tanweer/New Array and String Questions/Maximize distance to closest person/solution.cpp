class Solution 
{
public:
    int maxDistToClosest(vector<int>& seats) 
    {
        int maxd = -1 , i = 0, prevseat = -1 ;
        while(i<seats.size())
        {
            if(seats[i] == 1)
            {
                prevseat = i;
                maxd = i;
                break;
            }
            else
            {
                i++;
            }
        }
        i++;
        while(i<seats.size())
        {
            if(seats[i] == 1)
            {
                maxd = max(maxd,abs(i-prevseat)/2);
                prevseat = i;
            }
            i++;
        }
        maxd = max(maxd, i-prevseat-1);
        return maxd;
    }
};