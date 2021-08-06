class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>m;
        for(auto word : words)
            m[word]++;
        auto comp = [&](string n1, string n2){
            if(m[n1] == m[n2])
                return n2 < n1;
            else
                return m[n2] > m[n1];
        };
        priority_queue<string, vector<string>, decltype(comp)>heap(comp);
        for(auto i : m)
            heap.push(i.first);
        
        vector<string>ans;
        while(k--){
            ans.push_back(heap.top());
            heap.pop();
        }
        return ans;
    }
};
