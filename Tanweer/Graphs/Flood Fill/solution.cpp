class Solution 
{

private:
    void fillNewColor(vector<vector<int>>& image ,int sr, int sc, int oldColor , int newColor)
    {
        if(oldColor == newColor)
        {
            return;
        }
        else if(sr<0 || sr>=image.size() || sc<0 || sc>= image[sr].size())
        {
            return;
        }
        else if(image[sr][sc] != oldColor)
        {
            return;
        }
        image[sr][sc] = newColor;
        fillNewColor(image, sr-1 , sc , oldColor, newColor);
        fillNewColor(image, sr+1 , sc , oldColor, newColor);
        fillNewColor(image, sr, sc-1 , oldColor, newColor);
        fillNewColor(image, sr , sc+1 , oldColor, newColor);
        
    }
    
    
    
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
        fillNewColor(image,sr,sc,image[sr][sc],newColor);
        return image;
    }
};