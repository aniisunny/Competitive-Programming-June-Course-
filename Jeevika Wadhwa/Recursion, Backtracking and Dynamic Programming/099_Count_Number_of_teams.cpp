class Solution {
public:
    int numTeams(vector<int>& rating) {
        int counteams = 0;
        for(int i = 1; i<rating.size()-1; i++){
            int greaterCount = 0;
            int lesserCount = 0;
            
            for(int j = 0; j<i; j++)
                if(rating[j] < rating[i])
                    lesserCount++;
            for(int j = i+1; j<rating.size(); j++)
                if(rating[j] > rating[i])
                    greaterCount++;
            
        counteams += lesserCount * greaterCount;
        counteams += (i-lesserCount) * (rating.size() - 1 - i - greaterCount);
        }
        return counteams;
    }
};
