struct Node {
    Node* link[26]={NULL};
    bool flag=false;
    
    bool contain(char a){
        return (link[a-'a']!=NULL);
    }
    void put(char a, Node *node){
        link[a-'a']=node;
    }
     Node* get(char c){
        return link[c-'a'];
    }
};
class WordDictionary {
public:
    Node* root = new Node();

    void addWord( string word) {
        Node* curV = root;
        for(int i = 0; i < word.length(); i++) {
            

			if(!curV->contain(word[i])) {
                curV->put(word[i], new Node());
            }
            
            curV = curV->get(word[i]);
        }
        curV->flag = true;
    }
    
    bool search(string word) {
        return searchHelper(word, 0, root);
    }
    
    bool searchHelper(const string &word, int index, Node* curV) { //for big strings
        // BASE CASE
        if (index == word.length()) {
            return curV->flag;
        }

        
        char curChar = word[index];

        // when char is defiend
        if (curChar != '.') {
            if (curV->contain(curChar))
                return searchHelper(word, index + 1, curV->get(curChar));
            return false;
        }
        
        // when char is undefiend
        for (int i = 0; i < 26; i++) {
            if (curV->link[i]) {
                if (searchHelper(word, index + 1, curV->link[i]))
                    return true;
            }
        }
        return false;
    }
};



