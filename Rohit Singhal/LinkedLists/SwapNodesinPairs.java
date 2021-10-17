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
    public ListNode swapPairs(ListNode head) {
        if(head==null || head.next==null)
        {
            return head;
        }
        ListNode ans=head.next;
        ListNode temp=head;
        ListNode back=new ListNode();
        while(temp!=null && temp.next!=null)
        {
            ListNode temp2=temp.next.next;
            back.next=temp.next;
            temp.next.next=temp;
            temp.next=temp2;
            
            
            back=temp;
            temp=temp.next;
        }
        return ans;
        
    }
}
