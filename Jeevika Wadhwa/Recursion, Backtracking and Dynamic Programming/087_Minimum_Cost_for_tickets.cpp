class Solution {
public:
    int helper(vector<int>days, vector<int>costs, int day, vector<int>& dp){
        if(day >= days.size())
            return 0;
        if(dp[day] != 0)
            return dp[day];
        int oneDayPass = helper(days, costs, day+1, dp) + costs[0];
        int index;
        for(index = day; index<days.size(); index++)
            if(days[index] >= days[day] + 7)
                break;
        int sevenDayPass = helper(days, costs, index, dp) + costs[1];
        
        for(index = day; index<days.size(); index++)
            if(days[index] >= days[day] + 30)
                break;
        int thirtyDayPass = helper(days, costs, index, dp) + costs[2];
        return dp[day] = min(oneDayPass, min(sevenDayPass, thirtyDayPass));
    }
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int>dp(days.size(), 0);
        return helper(days, costs, 0, dp);
    }
};
