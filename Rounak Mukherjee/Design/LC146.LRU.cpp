
class LRUCache {
public:
    class node{
      public:
        int k;
        int v;
        node* next;
        node* prev;
        
        node(int key,int val){
            k=key;
            v=val;
        }
    };
    
    node* head=new node(-1,-1);
    node* tail=new node(-1,-1);
    int cap=0;
    unordered_map<int , node*>m;
    LRUCache(int capacity) {
        cap=capacity;
        tail->next=NULL;
        head->prev=NULL;
        tail->prev=head;
        head->next=tail;
    }
    void addnode(node* newnode){
        node* temp=head->next;
        head->next=newnode;
        temp->prev=newnode;
        newnode->prev=head;
        newnode->next=temp;
    }
    void deletenode(node* delnode){
        node* nprev=delnode->prev;
        node* nnext=delnode->next;
        nprev->next=nnext;
        nnext->prev=nprev;
    }
    
    int get(int key) {
        if(m.find(key)!=m.end()){
            node* n=m[key];
            int res=n->v;
            m.erase(key);
            deletenode(n);
            addnode(n);
            m[key]=head->next;
            return res;
        }
        return -1;
    }
    
    void put(int key, int value) {
         if(m.find(key) != m.end()) {
            node* existingnode = m[key];
            m.erase(key);
            deletenode(existingnode);
        }
        if(m.size() == cap) {
          m.erase(tail->prev->k);
          deletenode(tail->prev);
        }
        
        addnode(new node(key, value));
        m[key] = head->next; 
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
