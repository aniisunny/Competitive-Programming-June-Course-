// BRUTE FORCE

class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> graph[n+1]; // adjacency list
        
        for(auto v : trust)
            graph[v[0]].push_back(v[1]);    // creating list
        
        for(int i = 1; i<=n; i++){
            if(graph[i].empty()){   // if vector is empty
                bool flag = true;
                for(int j = 1; j<=n; j++){  // checking if that value is present in all vectors
                    if(j == i)continue;     // except the vector with value we are searching
                    if(find(graph[j].begin(), graph[j].end(), i) == graph[j].end()){
                        flag = false;   // if value not present in any vector
                        break;  // go to check another value
                    }
                }
                if(flag)
                    return i;   // if value in present in all vectors except self ofc
            }
        }
        return -1;  // no judge
            
    }
};
