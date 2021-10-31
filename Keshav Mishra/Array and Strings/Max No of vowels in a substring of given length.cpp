class Solution {
public:
    
   int maxVowels(string s, int k) {
int i=0,j=0,mx=0,cnt=0;
while(j < s.length())
{
if(s[j]=='a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u')
cnt++;
if(j-i+1<k)
j++;

        else if(j-i+1 == k)
        {
         mx = max(mx,cnt);
       if(s[i]=='a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u')
         cnt--;
         i++;j++;
        }
    }
  return mx;  
}
};