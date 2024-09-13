//13.Mirror Tree//
class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(node){
            Node* lc=node->left;
            Node* rc=node->right;
            Node* temp=lc;
            node->left=rc;
            node->right=temp;
            mirror(node->left);
            mirror(node->right);
        }
    }
};