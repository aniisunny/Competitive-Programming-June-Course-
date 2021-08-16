class Solution {
    public int myAtoi(String str) {
        int sign = 1;
        int i = 0, res = 0;
        str = str.trim();
        if (str.isEmpty()) return 0;
        else if (str.charAt(i) == '-') 
        { 
            i++; 
            sign = -1; 
        }
        else if (str.charAt(i) == '+') 
        {
            i++; 
        }
        while (i < str.length() && Character.isDigit(str.charAt(i))) 
        {
            int d = str.charAt(i) - '0';
            if (res > (Integer.MAX_VALUE - d) / 10) 
                return sign > 0 ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            res = res * 10 + d;
            i++;
        }
        return res * sign;
    }
}
