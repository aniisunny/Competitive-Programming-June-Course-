class Solution {
public:
    bool isAnagram(string s, string t) 
    {
     if (s.length()!=t.length())
	{
		return false;
	}
	int arr[26] = {0};
	for (int i=0;i<s.length();i++)
	{	
		arr[s[i]-97]+=1;
	}
	for (int i=0;i<t.length();i++)
	{	
		arr[t[i]-97]-=1;
	}
	for ( int i = 0; i<26; i++)
	{
		if(arr[i]!=0)
		{
			return false;
		}
	}
	return true;
     
    }
};