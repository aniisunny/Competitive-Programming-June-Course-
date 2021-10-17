class Solution {
    public int myAtoi(String s) {
        int i = 0;    
        int output = 0; 
        
        while (i < s.length() && s.charAt(i) == ' ') {
            i++;
        }
        

        boolean isNegative = false;
        if (i < s.length()) {
            if (s.charAt(i) == '-') {
                isNegative = true;
                i++;
            } else if (s.charAt(i) == '+') {
                i++;
            }   
        }
        
		
        while (i < s.length() && "0123456789".indexOf(s.charAt(i)) > -1) {
            
            int digit = Character.getNumericValue(s.charAt(i));
        
            int oldOutput = output;
            output = output * 10 + digit;
            
            
            if (output < 0 || (output - digit) / 10 != oldOutput) {
                return isNegative ? Integer.MIN_VALUE : Integer.MAX_VALUE;
            }
            
            i++;
        }
    
        return isNegative ? -output : output;
    }
}
