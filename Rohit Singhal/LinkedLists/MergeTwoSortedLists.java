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
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if(l1==null )
        {
            return l2;
        }
        if(l2==null)
        {
            return l1;
        }
        ListNode h1=l1;
        ListNode h2=l2;
        ListNode dummy;
        ListNode ans;
        if(l1.val<l2.val)
        {
            dummy=l1;
            ans=l1;
            l1=l1.next;
        }
        else
        {
            dummy=l2;
            ans=l2;
            l2=l2.next;
        }
        while(l1!=null && l2!=null)
        {
             if(l1.val<l2.val)
             {
                 dummy.next=l1;
                 dummy=dummy.next;
                 l1=l1.next;
             }
            else
            {
                dummy.next=l2;
                 dummy=dummy.next;
                 l2=l2.next;
            }
        }
        if(l1!=null)
        {
            dummy.next=l1;
        }
        if(l2!=null)
        {
            dummy.next=l2;
        }
        
        return ans;
        
        
    }
}
