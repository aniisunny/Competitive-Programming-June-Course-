
class solution{
    void reverseString(vector<char>&s){
        int start = 0, end = s.size() - 1;
        while (start<end)
        {
            /* code */
            swap(s[start++], s[end--]);
        }
        
    }
}
