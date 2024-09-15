//15.Binary Tree to DLL//
class Solution {
  private:
    Node* btod(Node* root, Node* node) {
        if (root == nullptr) {
            return node;
        }
        Node* prev = btod(root->right, node);
        root->right = prev;
        if (prev != nullptr) {
            prev->left = root;
        }
        return btod(root->left, root);
    }

  public:
    Node* bToDLL(Node* root) {
        return btod(root, nullptr);
    }
};
