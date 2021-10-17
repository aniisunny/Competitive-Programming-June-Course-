class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor) 
            return image;
        int initialColor=image[sr][sc];
        fill(image,sr,sc,initialColor,newColor); //dfs
        return image;
    }
  //dfs
    void fill(vector<vector<int>>& image, int sr, int sc,int initialColor, int newColor)
    {
        if(sr<0 || sc<0 || sr>=image.size() || sc>=image[0].size() || image[sr][sc]!=initialColor) return;
            image[sr][sc]=newColor;
        fill(image,sr+1,sc,initialColor,newColor);
        fill(image,sr,sc+1,initialColor,newColor);
        fill(image,sr-1,sc,initialColor,newColor);
        fill(image,sr,sc-1,initialColor,newColor);
    }
};
