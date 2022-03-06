




struct Node{
  int key; //which node in keymap
  int val;
  int  cnt;//which list
  Node *next;
  Node *prev;  
  Node(int k, int v){
      val=v;
      key=k;
      cnt=1; 
  }  
};
struct List {
    int size; 
    Node *head; 
    Node *tail; 
    List() {
        head = new Node(0, 0); 
        tail = new Node(0,0); 
        head->next = tail;
        tail->prev = head; 
        size = 0;
    }
    
    void addFront(Node *node) {
        Node* temp = head->next;
        node->next = temp;
        node->prev = head;
        head->next = node;
        temp->prev = node;
        size++; 
    }
    
    void removeNode(Node* delnode) {
        Node* delprev = delnode->prev;
        Node* delnext = delnode->next;
        delprev->next = delnext;
        delnext->prev = delprev;
        size--; 
    }    
};
class LFUCache {

    map<int,Node*>km;//key node map
    map<int,List*>frm;//frequency map
    int maxcache;
    int minFreq; 
    int curSize; 
public:
    LFUCache(int capacity) {
        maxcache = capacity; 
        minFreq = 0;
        curSize = 0; 
    }
    
   void updateFreqListMap(Node *node) {
        km.erase(node->key); 
        frm[node->cnt]->removeNode(node); 
        if(node->cnt == minFreq && frm[node->cnt]->size == 0) {
            minFreq++; 
        }
        
        List* nextHigherFreqList = new List();
        if(frm.find(node->cnt + 1) != frm.end()) {
            nextHigherFreqList = frm[node->cnt + 1];
        } 
        node->cnt += 1; 
        nextHigherFreqList->addFront(node); 
        frm[node->cnt] = nextHigherFreqList; 
        km[node->key] = node;
    }
    
  
    
    int get(int key) {
        if(km.find(key)!=km.end()){
            Node* node=km[key];
            int val=node->val;
            updateFreqListMap(node);
            return val;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(maxcache==0){return;}
        if(km.find(key)!=km.end()){
            Node* node=km[key];
            node->val=value;
           updateFreqListMap(node);
        }
        else{
            if(maxcache==curSize){
                List *list=frm[minFreq];
                km.erase(list->tail->prev->key);
                frm[minFreq]->removeNode(list->tail->prev);
                curSize--;
            }
            curSize++;
            minFreq=1;
            List* list2=new List();
            if(frm.find(minFreq) != frm.end()) {
                list2 = frm[minFreq]; 
            }
            Node* node = new Node(key, value); 
            list2->addFront(node);
            km[key] = node; 
            frm[minFreq] = list2; 
        }
    }
};

