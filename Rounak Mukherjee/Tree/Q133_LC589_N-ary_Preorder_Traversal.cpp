  class Solution {
public:
    vector<int> preorder(Node* root) {
        if(root==nullptr) return{};
        stack<Node*> st;
        vector<int> ans;
        st.push(root);
        
        while(!st.empty()){
            Node* node = st.top();
            st.pop();
            ans.push_back(node->val);
            for(int i=(node->children).size()-1;i>=0;--i){
                st.push(node->children[i]);
            }
        }
        return ans;
    }
};
