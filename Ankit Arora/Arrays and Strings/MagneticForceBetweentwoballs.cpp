class Solution {
public:
    bool isAnswer(vector<int>&position , int mid , int m)
    {
        int initial = 1;
        int prev = position[0];
        for(int i=1 ; i<position.size() ; i++)
        {
            if(position[i]-prev >= mid)
            {
                initial++;
                prev = position[i];
                if(initial==m) return true;
            }
        }
        if(initial<m) return false;
        return true;
    }


    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start = 0 , n = position.size(), end = position[n-1];
        int ans;
        while(start<=end)
        {
            int mid = start + (end - start)/2;
            if(isAnswer(position,mid,m))
            {
                ans = mid;
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        return ans;

    }
};

