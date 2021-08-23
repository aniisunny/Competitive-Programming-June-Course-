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
    public void swap(ListNode node)
    {
        if(node == null)
        {
            return;
        }
        ListNode first = node.next;
        ListNode second = null;
        if(first != null)
            second = first.next;
        
        if(second != null)
        {
            ListNode third = second.next;
            second.next = first;
            node.next = second;
            first.next = third;
            swap(first);
        }
    }
    public ListNode swapPairs(ListNode head) {
        ListNode dummy = new ListNode();
        dummy.next = head;
        swap(dummy);
        return dummy.next;
        
    }
}
