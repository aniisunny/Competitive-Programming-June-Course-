class Solution {
public:
    int reverse(int x) 
    {
        long num = 0;
        
        while (x) {
            int digit = x % 10;
            num = num * 10 + digit; 
            x /= 10;
        }
        
        if (num > INT_MAX || num < INT_MIN)
            return 0;
        
        return (int) num;
    }
};