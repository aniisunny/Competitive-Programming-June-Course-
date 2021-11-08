class Solution {
public:
    int reverse(int x) {
        int y=0;
        while(x!=0)
        {
            if((y>(INT_MAX/10))||(y<(INT_MIN/10)))return 0;
            y=10*y+x%10;
            x=x/10;
        }
        return y;
    
    }
};
