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
    
     public ListNode reverse(ListNode head)
     {
         if(head==null || head.next==null)
         {
             return head;
         }
         ListNode dummy=null;
         ListNode next;
         while(head!=null)
         {
             next=head.next;
             head.next=dummy;
             dummy=head;
             head=next;
         }
         return dummy;
     }
    
    
    public boolean isPalindrome(ListNode head) {
        if(head==null || head.next==null)
        {
            return true;
        }
        ListNode slow=head;
        ListNode fast=head;
        while(fast.next!=null && fast.next.next!=null)
        {
            slow=slow.next;
            fast=fast.next.next;
        }
        slow.next=reverse(slow.next);
        slow=slow.next;
        ListNode temp=head;
        while(slow!=null)
        {
            if(slow.val!=temp.val)
            {
                return false;
            }
            slow=slow.next;
            temp=temp.next;
        }
        return true;

        
    }
}
