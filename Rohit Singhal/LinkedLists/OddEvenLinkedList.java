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
    public ListNode oddEvenList(ListNode head) {
        if(head== null || head.next==null || head.next.next==null)
        {
            return head;
        }
        
        
        ListNode oddstart=head;
        ListNode evenstart=head.next;
        ListNode odd=head;
        ListNode even=head.next;
        
        while(odd!=null && even!=null)
        {
            ListNode temp=even.next;
            if(even.next!=null)
            even.next=even.next.next;
            odd.next=temp;
            
            if(odd.next!=null)
            odd=odd.next;
            even=even.next;
        }
        odd.next=evenstart;
        return oddstart;
        
    }
}
