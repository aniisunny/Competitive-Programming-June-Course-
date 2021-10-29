class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int ans = 0;

    	for (int i = 0; i < mat.size(); ++i)
	    {
		    for (int j = 0; j < mat[i].size(); ++j)
		    {
			    if(i == j)
			    {
				    ans += mat[i][j];
			    }
		    }
	    }

	    for (int i = 0; i < mat.size(); ++i)
	    {
		    for(int j = 0; j < mat[i].size(); ++j)
		    {
			    if(i+j+1 == mat.size()){
				    if(i == j)
				    {
					    continue;
				    }
				    else
				    {
					    ans += mat[i][j];
				    }
			    }
		    }
	    }
        return ans;
    }
};