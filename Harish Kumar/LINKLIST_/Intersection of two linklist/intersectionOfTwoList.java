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
    public static int length(ListNode A)
    {
        int count = 0;
        while(A != null)
        {
            A = A.next;
            count++;
        }
        return count;
    }
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        
        int sizeA = length(headA);
        int sizeB = length(headB);
        
        if(sizeA > sizeB)
        {
            for(int i = 0;i< sizeA-sizeB;i++)
            {
                headA = headA.next;
            }
        }
        else
        {
            for(int i = 0;i<sizeB-sizeA;i++)
            {
                headB = headB.next;
            }
        }
        
        while(headA != null && headB != null)
        {
            if(headA != headB)
            {
                headA = headA.next;
                headB = headB.next;
            }
            else
            {
                return headA;
            }
        }
        return null;
    }
}

