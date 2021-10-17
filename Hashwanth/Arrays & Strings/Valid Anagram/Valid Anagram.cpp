class Solution {
public:
    bool isAnagram(string s, string t) {
        //soln1
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;
        //soln 2(O(n))
        int arr[26];
        for(int i=0;i<26;i++)
            arr[i]=0;
        for(auto x:s)
            arr[x-'a']++;
        for(auto x:t)
            arr[x-'a']--;
        for(int i=0;i<26;i++)
        {
            if(arr[i]!=0)
                return false;
        }
        return true;
    }
};
