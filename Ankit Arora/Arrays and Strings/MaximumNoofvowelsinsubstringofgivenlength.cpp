class Solution {
public:

    int maxVowels(string s, int k) {
      int ans=0 , c=0 , l=0,st=0,e=0;
      unordered_set<char>d = {'a','e','i','o','u'};
        while(e<s.size())
        {
            if(l==k)
            {
                if(d.find(s[st++]) != d.end()) c--;
                if(d.find(s[e++]) != d.end()) c++;
            }
            else
            {
                if(d.find(s[e++]) != d.end()) c++;
                l++;
            }
            ans = max(c,ans);
        }
        return ans;
    }

//     bool isVowel(char ch)
//     {
//         return ((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u'));
//     }


//     int maxVowels(string s, int k) {
//         int  max_len = INT_MIN;
//         int len = 0;
//         for(int i=0 ; i<s.length() ; i++)
//         {

//             char ch = s[i];
//             if(isVowel(ch))
//             {
//                 len++;
//             }
//             else
//             {
//                 len = 0;
//             }
//             if(len>max_len and len<=k)
//             {
//                 max_len = len;
//             }




//         }
//         return max_len;

//     }

};
