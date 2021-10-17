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
    public static ListNode mid(ListNode head)
    {
     
        ListNode slow = head;
        ListNode fast = head;
        
        while(fast.next != null && fast.next.next != null )
        {
            slow = slow.next;
            fast = fast.next.next;
        }
        return slow;
    }
    
    public static ListNode reverse(ListNode head)
    {
        
        ListNode dummy = null;
        
        while(head != null)
        {
            ListNode temp = head.next;
            head.next = dummy;
            dummy = head;
            head = temp;
            
        }
        return dummy;
    }
    public boolean isPalindrome(ListNode head) {
        if(head == null || head.next == null)
        {
            return true;
        }
          
        ListNode middle = mid(head);
        
        middle.next = reverse(middle.next);
        middle = middle.next;
        
        while(middle != null)
        {
            if(middle.val != head.val)
            {
                return false;
            }
            head = head.next;
            middle = middle.next;
        }
        return true;
         
        
        
    }
}
