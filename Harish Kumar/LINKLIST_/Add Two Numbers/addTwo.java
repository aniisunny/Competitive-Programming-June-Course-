/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        
        ListNode ans = new ListNode();
        ListNode head = ans;
        int carry = 0;
        int sum = 0;
        
        while(l1 != null || l2 != null)
        {
            sum = sum / 10;
            ListNode dummy = new ListNode();
            if(l1 != null)
            {
                
                sum  = l1.val + sum;
                l1 = l1.next;
                
            }
            if(l2 != null)
            {
                sum =  l2.val + sum;
                l2 = l2.next;
               
            }
            carry = sum / 10;
            dummy.val = sum % 10;
            
            head.next = dummy;
            head = head.next;
            if(carry == 1)
            {
                dummy.next = new ListNode(1);
            }   
            
        }
        
        return ans.next;
    }
}
