/*
// Definition for a Node.
class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}
*/

class Solution {
    public Node copyRandomList(Node head) {
        Node dummy=head;
        while(dummy!=null)
        {
            Node temp=new Node(dummy.val);
            temp.next=dummy.next;
            dummy.next=temp;
            dummy=dummy.next.next;
        }
        dummy=head;
        while(dummy!=null)
        {
            if(dummy.random==null)
            {
                dummy.next.random=dummy.random; 
            }
            else
            {
                 dummy.next.random=dummy.random.next;
            }
           
            dummy=dummy.next.next;

        }
        dummy=head;
        Node item=new Node(0);
        Node ans=item;
        while(dummy!=null)
        {
            item.next=dummy.next;
            dummy.next=dummy.next.next;
            item=item.next;
            dummy=dummy.next;
            
        }
        return ans.next;
        
        
    }
}
