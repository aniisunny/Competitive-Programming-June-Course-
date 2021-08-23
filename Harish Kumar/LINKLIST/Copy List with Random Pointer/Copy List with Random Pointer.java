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
        
        HashMap<Node, Node> map = new HashMap<>();
        Node curr = head;
        
        Node nHead = new Node(-1);
        Node prev = nHead;
        
        while(curr != null )
        {
            Node node =  new Node(curr.val);
            prev.next = node;
            map.put(curr, node);
            
            prev = prev.next;
            curr = curr.next;
        }
        nHead = nHead.next;
        Node c1 = head;
        Node c2 = nHead;
        
        while(c1 != null)
        {
            c2.random = (c1.random != null ? map.get(c1.random) : null);
            
            c1 = c1.next;
            c2 = c2.next;
        }
        return nHead;
    }
}
