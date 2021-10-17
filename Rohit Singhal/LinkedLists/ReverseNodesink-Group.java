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
    ListNode ans=null;
    public ListNode reverse(ListNode head)
    {
        ListNode dummy=null;
        ListNode temp=head;
        while(temp!=null)
        {
            ListNode next=temp.next;
            temp.next=dummy;
            dummy=temp;
            temp=next;
        }
        if(ans==null)
        {
            ans=dummy;
        }
        
        return dummy;
    }
    
    public ListNode reverseKGroup(ListNode head, int k) {
         ListNode tempHead=head;
         ListNode prev=new ListNode(1);
        
        while(tempHead!=null)
        {
            int count=1;
       
        ListNode temp=tempHead;
        while(temp!=null && count<k)
        {
            temp=temp.next;
            count++;
        }
        if(temp==null)
        {
            break;
        }
        ListNode curr=temp.next;
       temp.next=null;
       prev.next= reverse(tempHead);
        
        tempHead.next=curr;
        prev=tempHead;
        tempHead=curr; 
        }
        
        return ans;
   
        
    }
}
