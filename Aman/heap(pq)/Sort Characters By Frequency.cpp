class Solution {
public:
    typedef pair<int,char>p;
    string frequencySort(string s) {
        string res="";
        unordered_map<char,int>mp;
        priority_queue<p>pq;
        for(int i=0;i<s.length();i++)
          mp[s[i]]++;
        for(auto m:mp)
        {
            pq.push({m.second,m.first});
        }
        while(pq.size()>0)
        {
            int n=pq.top().first; 
		    while(n--)
			  res+=pq.top().second;
            pq.pop();
        }
        return res;
    }
};
