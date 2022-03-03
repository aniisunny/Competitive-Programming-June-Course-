
class MyHashMap {
    vector<list<pair<int,int>>> m;
    int siz;

public:
    
    MyHashMap() {
        siz=1e6;
        m.resize(siz);
    }
    int hashing(int key){
        return key%siz;
    }
    list<pair<int,int>> :: iterator search(int key){
        int i=hashing(key);
        list<pair<int,int>>:: iterator it=m[i].begin();
        while(it!=m[i].end()){
            if(it->first==key){return it;}
            it++;
        }
        return it;
    }
    
    void put(int key, int value) {
      int i=hashing(key);
      remove(key);
      m[i].push_back({key,value});  
    }
    
    int get(int key) {
       int i=hashing(key); 
      list<pair<int,int>>::iterator it=search(key);
        if(it==m[i].end()){return -1;}
        return it->second;
        
    }
    
    void remove(int key) {
       int i=hashing(key);
       if(search(key)!=m[i].end()){  
       m[i].erase(search(key)); 
       }   
    }
};

