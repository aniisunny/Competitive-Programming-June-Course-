class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(), intervals.end());
        if(intervals.size()==0 || intervals.size() == 1)
        {
            return intervals;
        }
        else
        {
            vector<vector<int>> arr;
            arr.push_back(intervals[0]);
            for(int i = 1 ; i<intervals.size() ; i++)
            {
                if((intervals[i][0]) <= (arr[arr.size()-1][1]))
                {
                    if((intervals[i][1]) > (arr[arr.size()-1][1]))
                    {
                        arr[arr.size()-1][1] = intervals[i][1] ;
                    }
                    
                }
                else
                {
                    arr.push_back(intervals[i]);
                }
            }
            return arr;
            
        }
    }
};