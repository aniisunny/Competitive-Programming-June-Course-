class Solution {
	public int subarraySum(int[] nums, int k) {
		Map<Integer,Integer> pre=new HashMap<>();
		int sum=0,count=0;
		pre.put(sum,1);
		for(int i:nums){
			sum+=i;
			if(pre.containsKey(sum-k))
        count+=pre.get(sum-k);
		else
      pre.put(sum,pre.getOrDefault(sum,0)+1);
		}
		return count;
	}
}
