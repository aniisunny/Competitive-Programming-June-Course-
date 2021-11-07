class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       vector<int>ans;
        int rows = matrix.size(), cols = matrix[0].size();
        int top = 0, bottom = rows-1, left = 0, right = cols-1;
        int dir = 0, i; 
        while(top <= bottom && right >= left)
        {
            if(dir == 0) //left to right
            {
                for(i = left; i <= right; i++)
                    ans.push_back(matrix[top][i]);
                top++;
            }
            else if(dir == 1) //top to bottom
            {
                for(i = top; i <= bottom; i++)
                    ans.push_back(matrix[i][right]);
                right--;
            }
            else if(dir == 2) //right to left
            {
                for(i = right; i >= left; i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }
            else if(dir == 3) //bottom to top
            {
                for(i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
            dir = (dir+1)%4;
        }
        return ans;
    }
};
