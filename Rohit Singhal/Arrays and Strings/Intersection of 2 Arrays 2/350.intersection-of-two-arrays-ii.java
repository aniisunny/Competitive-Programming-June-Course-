/*
 * @lc app=leetcode id=350 lang=java
 *
 * [350] Intersection of Two Arrays II
 */

// @lc code=start
class Solution {
    public int[] intersect(int[] nums1, int[] nums2) {
        HashMap<Integer,Integer> map=new HashMap<>();
        ArrayList<Integer> temp=new ArrayList<>();
        for(int i=0;i<nums1.length;i++)
        {
            if(map.containsKey(nums1[i]))
            {
                map.put(nums1[i],map.get(nums1[i])+1);
            }
            else
            {
                map.put(nums1[i],1);
            }
        }
       
      
        for(int i=0;i<nums2.length;i++)
        {
            if(map.containsKey(nums2[i]) && map.get(nums2[i])>=1)
            {
                temp.add(nums2[i]);
                map.put(nums2[i],map.get(nums2[i])-1);
            }
        }
        int ans[]=new int[temp.size()];
        for(int i=0;i<temp.size();i++)
        {
            ans[i]=temp.get(i);
        }
        return ans;
    }
}
// @lc code=end

