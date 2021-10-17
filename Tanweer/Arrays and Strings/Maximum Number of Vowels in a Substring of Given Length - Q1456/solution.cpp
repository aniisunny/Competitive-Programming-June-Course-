class Solution {
public:
    int maxVowels(string s, int k) 
    {
        int counter = 0, maxc = 0;
        int arr[26] = {0};
        string ref = "aeiou";
        for (int i = 0 ; i<ref.length() ; i++)
        {
            arr[ref[i]-'a']++;
        }
        for (int i = 0 ; i<k ; i++)
        {
            if(arr[s[i]-'a']>0)
            {
                counter++;
            }
        }
        maxc = counter;
        for(int i = k ; i<s.length() ; i++)
        {
            if(arr[s[i]-'a']>0)
            {
                counter++;
            }
            if(arr[s[i-k]-'a']>0)
            {
                counter--;
            }
            maxc = max(maxc,counter);
        }
        return maxc;
    }
};