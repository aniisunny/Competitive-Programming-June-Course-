class Solution {
public:
 bool isVowel(char c)
    {
        return (c=='a' || c=='e' || c=='i' ||c=='o' ||c=='u');
    }
    int maxVowels(string s, int k) {
        int i=0,j=0;
        int numVowels =0;
        int maxm=0;
        while(j<s.size()){
            // increase the count of vowels, if the character pointing at j is a vowel
            if(isVowel(s[j]))
                numVowels++;
            // increase the window size
            if(j-i+1<k)
                j++;
            // if the window size hits, check if the current number of vowels is maximum
            else if(j-i+1 == k){
                maxm=max(maxm,numVowels);
                if(isVowel(s[i]))
                    numVowels--;// remove the calculation for the character pointing at i, if it is a vowel
                i++;
                j++;
            }
        }
        return maxm;
    }
};
