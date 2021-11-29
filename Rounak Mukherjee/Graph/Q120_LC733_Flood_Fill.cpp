class Solution {
public:
     vector<vector<int>> solve(vector<vector<int>>& image, int sr, int sc, int newColor,int colour) {
       
        if(image.empty() || sr == -1 || sr == image.size() || sc == -1
           || sc == image[0].size() || image[sr][sc] != colour || colour == newColor) 
            return image;
        image[sr][sc] = newColor;
        solve(image, sr - 1, sc, newColor,colour);
        solve(image, sr + 1, sc, newColor,colour);
        solve(image, sr, sc - 1, newColor,colour);
        solve(image, sr, sc + 1, newColor,colour);
        return image;
    }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int colour=image[sr][sc];
        return solve(image,sr,sc,newColor,colour);
    }
};

