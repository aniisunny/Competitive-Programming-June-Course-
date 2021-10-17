class Solution {
public:
    int maxArea(vector<int>& height)
    {
        int first = 0 , second = height.size()-1 , maxc = 0;
        while(first<second)
        {
            int mintwo = min(height[second],height[first]);
            maxc = max(maxc , (second-first)*mintwo);
            if(mintwo == height[second])
            {
                second--;
            }
            else
            {
                first++;
            }
        }
        return maxc;
    }
};