


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


class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
      Trie trie;
      int maxi=0;
       
      for(int i=0;i<nums.size();i++){
          trie.insert(nums[i]);
      }  
       for(int i=0;i<nums.size();i++){
          maxi=max(maxi,trie.findmax(nums[i]));
      }   
        return maxi;
    }
};
