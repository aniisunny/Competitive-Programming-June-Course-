class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int count[6] = {0};
        for(int i = 0; i<tops.size(); i++){
            count[tops[i]-1]++;
            count[bottoms[i]-1]++;   
        }
        int maxCount = -1;
        int number = 0;
        for(int i = 0; i<6; i++){
            if(count[i] > maxCount){
                maxCount = count[i];
                number = i+1;
            }
        }
        if(maxCount < tops.size())return -1;
        int t=0,b=0;
        for(int i = 0; i<tops.size(); i++){
            if(tops[i]==number && bottoms[i]==number)continue;
            else if(tops[i]==number)t++;
            else if(bottoms[i]==number)b++;
            else if(tops[i] != number && bottoms[i] != number)
                return -1;
        }
        return min(t,b);
    }
};
