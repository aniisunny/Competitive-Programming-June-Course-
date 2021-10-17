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
//     public ListNode reverse(ListNode head)
//     {
//          if(head==null || head.next==null)
//          {
//              return head;
//          }
//         ListNode headnext=head.next;
//         ListNode temp=reverse(head.next);
//         headnext.next=head;
//         head.next=null;
//         return temp;
        
//     }
//      public int length(ListNode head)
//      {
//          int count=0;
//          ListNode temp=head;
//          while(temp!=null)
//          {
//              count++;
//              temp=temp.next;
//          }
//          return count;
//      }
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode dummy=new ListNode();
        dummy.next=head;
        ListNode slow=dummy;
        ListNode fast=dummy;
        for(int i=0;i<n;i++)
        {
            fast=fast.next;
        }
        while(fast.next!=null)
        {
            fast=fast.next;
            slow=slow.next;
        }
        slow.next=slow.next.next;
        return dummy.next;
        // int l=length(head);
        // if(n>l)
        // {
        //     return head;
        // }
        // if(l==1 )
        // {
        //     if(n==1)
        //     {
        //         head=null;
        //         return head;
        //     }
        // }
        // ListNode newhead=reverse(head);
        //   ListNode temp=newhead;
        // if(n==1)
        // {
        //     newhead=temp.next;
        // }
        // else
        // {
        // int count=1;
        //  while(temp.next!=null && count<n-1)
        //  {
        //      temp=temp.next;
        //      count++;
        //  }
        // temp.next=temp.next.next;
        // }
        // newhead=reverse(newhead);
        // return newhead;
        
        
    }
}
