class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArr=0;
        int start=0;
        int end=height.size()-1;
            
        while(start<=end){
            
            int min_height=min(height[start],height[end]);
            maxArr=max(maxArr,(end-start)*min_height);
            
            if(height[start]<height[end]) start++;
            else end--;
        }
        return maxArr;
    }
};