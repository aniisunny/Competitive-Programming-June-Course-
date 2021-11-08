
class Solution {
public:
    int reverse(int x) {
        int num = 0;
        while(x != 0){
            int rem = x%10;
            x /= 10;
            if(num > INT_MAX/10 or (num == INT_MAX/10 and rem > INT_MAX%10))
                return 0;
            else if(num < INT_MIN/10 or (num == INT_MIN/10 and rem < INT_MIN%10))
                return 0;
            num = num*10 + rem;
        }
        return num;
    }
};
