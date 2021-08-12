class Solution {
public:
    string frequencySort(string s) {
        map<char,int>m;
        for(char c : s)
            m[c]++;
        auto comp = [&](char n1, char n2){
            return m[n2] > m[n1];
        };
        priority_queue<char, vector<char>, decltype(comp)>heap(comp);
        for(auto i : m)
            heap.push(i.first);
        string ans;
        while(!heap.empty()){
            char c = heap.top();heap.pop();
            for(int i = 0; i<m[c]; i++)
                ans.push_back(c);
        }
        return ans;
    }
};
