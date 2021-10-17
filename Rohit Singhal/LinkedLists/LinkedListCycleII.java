/**
 * Definition for singly-linked list.
 * class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */

public class Solution {
   public ListNode detectCycle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;
        
        // One pointer travels 2 steps ahead of the other
        while(fast != null && fast.next != null) {
            fast = fast.next.next;
            slow = slow.next;
            
            // When they meet a cycle is found, not necessarily the entry point of the cycle
            if(fast == slow) {
                
                // Set slow pointer to beginning list
                slow = head;
                
                // Increment them each by one step unlike previously, They will always meet at entry point of cycle
                while(fast != slow) {
                    fast = fast.next;
                    slow = slow.next;
                }
                return slow;
            }
        }
        
        return null;
    }
}
