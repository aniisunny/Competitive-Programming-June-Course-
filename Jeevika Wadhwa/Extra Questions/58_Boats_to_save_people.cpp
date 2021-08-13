class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(begin(people), end(people));
        int boats = 0;
        int i = 0, j = people.size() - 1;
        while(i <= j){
            boats++;
            if(people[i] + people[j] <= limit)
                i++;
            j--;
        }
        return boats;
    }
};
