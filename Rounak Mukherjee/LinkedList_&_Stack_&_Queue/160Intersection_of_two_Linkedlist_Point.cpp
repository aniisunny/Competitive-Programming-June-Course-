
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *a, ListNode *b) {
       	int n = 0;
		int m = 0;
		ListNode* ptr1 = a;
		ListNode* ptr2 = b;
		while(ptr1 != NULL){
			n++;
			ptr1 = ptr1 -> next;
		}
		while(ptr2 != NULL){
			m++;
			ptr2 = ptr2 -> next;
		}
		int t = abs(n - m);
		if(n > m){
			while(t){
				a = a -> next;
				t--;
			}
		}
		else{
			while(t){
				b = b -> next;
				t--;
			}
		}
		while(a != NULL and b != NULL){
			if(a == b){
				return a;
			}
			a = a -> next;
			b = b -> next;
		}
		return NULL;
    }
};
