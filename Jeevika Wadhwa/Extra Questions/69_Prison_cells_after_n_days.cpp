class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        map<vector<int>, int>m;
        while(n > 0){
            m[cells] = n--;
            vector<int>cells2(8,0);
            for(int i = 1; i<7; i++)
                cells2[i] = cells[i-1] == cells[i+1] ? 1 : 0;
            cells = cells2;
            if(m.find(cells) != m.end()){
                n %= m[cells] - n;
            }
        }
        return cells;
    }
};
