public:
    vector<int> plusOne(vector<int>& digits) {
        int i=0;
        reverse(digits.begin(), digits.end());
        while(i<digits.size() && digits[i]==9) {
            digits[i]=0;
            i++;
        }
        if(i<digits.size()) {
            digits[i]++;
        }
        else digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;
    }
};