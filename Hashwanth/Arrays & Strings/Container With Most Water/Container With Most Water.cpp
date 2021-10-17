class Solution {
public:
    int maxArea(vector<int>& height) {
        int a=0;
        int i=0;
        int j=height.size()-1;
        while(i<j)
        {
            int mh=min(height[i],height[j]);
            a=max(a,mh*(j-i));
            while(height[i]<=mh && i<j) i++;
            while(height[j]<=mh && i<j) j--;
        }
        return a;
    }
};
