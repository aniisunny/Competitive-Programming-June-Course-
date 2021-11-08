class Solution {
public:
int reverse(long int x) {
long int b = 0;
long int a;

    while(x != 0){
        a = x%10;
        b = b*10 + a;
        x = x/10;        
    }
    
    if(b < (pow(2,31) - 1) && b > -pow(2,31)){
        return b;
    }
    else{
        return 0;
    }
}
};