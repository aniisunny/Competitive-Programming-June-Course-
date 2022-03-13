// CodeStudio Question

//Refference Question: max value of a number m with whole array elements XOR
//In that case when we insert number we insert as binary bits



//In this question array 1 is a trie and and each elements of array2 we will check
struct Node{
  Node* link[2];
  
    bool contain(int ind){
        return (link[ind]!=NULL);
    }
  void put(int ind, Node* node){
      link[ind]=node;
  }  
   Node* get(int ind){
       return link[ind];
   } 
};
class Trie{
  private:
      Node *root;
  public: 
    Trie(){
        root=new Node();
    }

    void insert(int num){
        Node* node= root;
        for(int i=31;i>=0;i--){
            int bit=(num>>i) & 1;
            if(!node->contain(bit)){
                node->put(bit,new Node());
            }
                node=node->get(bit);   
        }
    }
    int findmax(int num){
        int maxi=0;
        Node *node=root;
        for(int i=31;i>=0;i--){
            int bit=(num>>i) &1;
            if(node->contain(1-bit)){//-1 give us oposite
               maxi=maxi | (1<<i); 
               node=node->get(1-bit); 
            } else{
                node=node->get(bit);
            }
        }
        return maxi;
    }
};

int maxXOR(int n, int m, vector<int> &arr1, vector<int> &arr2) 
{   Trie trie;
    int maxi=0;
 for(auto &it: arr1){trie.insert(it);}
 for(auto &it: arr2){
     maxi=max(maxi,trie.findmax(it));
 }
    return maxi;
}
