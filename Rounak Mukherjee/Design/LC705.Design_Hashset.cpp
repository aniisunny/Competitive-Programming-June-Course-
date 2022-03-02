
class MyHashSet {
public:
    vector<list<int>>c;
    int siz=1e6+1;
    MyHashSet() {
        c.resize(siz);
        
    }
    int hashing(int k){
        return k%siz;
    }
    list<int>::iterator hsearch(int k){
        int pos=hashing(k);
        return find(c[pos].begin(),c[pos].end(),k);
        
    }
    
    void add(int key) {
        int i=hashing(key);
        if(contains(key)){
          return ;  
        }
        c[i].push_back(key);
    }
    
    void remove(int key) {
        int i = hashing(key);
        if(!contains(key)){return;}
        
        c[i].erase(hsearch(key));
    }
    
    bool contains(int key) {
      int i = hashing(key);
      if(hsearch(key)!=c[i].end()){
          return true;
      }  
        return false;
    }
};

/**
 we can simply using vecdtor but then for collicon we using hashing function(here it is chaining method)
 */
