class Solution {
public:
    int findMin(vector<int>& a) {
        int low = 0, high = a.size()-1;
        while(low < high){
            int mid = low + (high - low)/2;
            if(a[mid] < a[high])
                high = mid;
            else
                low = mid+1;
        }
        return a[low];
    }
};
