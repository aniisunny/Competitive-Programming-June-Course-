/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    
    public int length(ListNode head)
    {
        ListNode temp=head;
        int len=0;
        while(temp!=null)
        {
            len++;
            temp=temp.next;
        }
        return len;
        
    }
    
    
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        int len1=length(headA);
        int len2=length(headB);
        if(len1>len2)
        {
             for(int i=0;i<len1-len2;i++)
             {
                 headA=headA.next;
             }
        }
        else
        {
            for(int i=0;i<len2-len1;i++)
             {
                 headB=headB.next;
             }
        }
        while(headA!=null && headB!=null)
        {
            if(headA==headB)
            {
                return headA;
            }
            else
            {
                headA=headA.next;
                headB=headB.next;
            }
        }
        return null;
       
        
    }
}
