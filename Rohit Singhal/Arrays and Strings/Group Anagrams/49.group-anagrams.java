/*
 * @lc app=leetcode id=49 lang=java
 *
 * [49] Group Anagrams
 */

// @lc code=start
class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        List<List<String>> ans=new ArrayList<>();
        HashMap<String,ArrayList<String>> map=new HashMap<>();
        for(String str: strs)
        {
             char[] temp=str.toCharArray();
            Arrays.sort(temp);
            String sorted=String.valueOf(temp);
            
            if(!map.containsKey(sorted))
            {
                map.put(sorted,new ArrayList<>());
            }
            
            map.get(sorted).add(str);
                
        }
        
        ans.addAll(map.values());
        return ans;  
    }
}
// @lc code=end

